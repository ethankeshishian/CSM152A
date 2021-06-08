`timescale 1ms / 1ms
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:24:29 05/23/2021 
// Design Name: 
// Module Name:    parking_meter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module parking_meter(
    input add1,
    input add2,
    input add3,
    input add4,
    input rst1,
    input rst2,
    input clk,
    input rst,
    output reg [6:0] led_seg,
    output reg a1,
    output reg a2,
    output reg a3,
    output reg a4,
    output reg [3:0] val1,
    output reg [3:0] val2,
    output reg [3:0] val3,
    output reg [3:0] val4
    );
	 
/* Global Variables */
parameter MAX_CLOCK_COUNT = 50;
parameter MAX_TIMER = 14'b10011100001111;
	 
/* States */
parameter S_RESET = 5'b00000;
parameter S_RESET1 = 5'b00001;
parameter S_RESET2  = 5'b00010;

parameter S_ZERO = 5'b00011;
parameter S_3MIN = 5'b00100;
parameter S_COUNTING = 5'b00101;

/* Internal variables */
reg [5:0] current_state = S_ZERO;
reg [5:0] next_state = S_ZERO;

reg [13:0] timer = 14'b00000000000000; // Timer for output
reg [6:0] clock_count = 0; // Internal clock at 100hz

/* Always block for next state, sequential */
always @(posedge clk) begin
	if (rst) current_state <= S_RESET;
	else if (rst1) current_state <= S_RESET1;
	else if (rst2) current_state <= S_RESET2;
	else current_state <= next_state;
	
	// counter for clock
	clock_count <= clock_count + 1;
	if (clock_count >= MAX_CLOCK_COUNT) begin
		clock_count <= 1;
	end
end

/* Always block that decides next state and manages internal state, combinational */
always @(*)
case (current_state)

S_RESET: begin
	next_state = S_ZERO;
end
S_RESET1: begin
	timer = 16;
	next_state = S_3MIN;
end
S_RESET2: begin
	timer = 150;
	next_state = S_3MIN;
end
S_ZERO: begin
	timer = 0;
	set_time();
	set_next_state();
end
S_3MIN: begin
	if (clock_count == MAX_CLOCK_COUNT) begin
		timer = timer - 1;	
	end
	set_time();
	set_next_state();
end
S_COUNTING: begin
	if (clock_count == MAX_CLOCK_COUNT) begin
		timer = timer - 1;	
	end	
	set_time();
	set_next_state();
end

endcase

/* Always block to determine output, combinational */
always @(*)
case(current_state)

S_ZERO: begin
	if (clock_count >= 0 && clock_count <= MAX_CLOCK_COUNT / 2) begin
		set_digits(MAX_CLOCK_COUNT, 0);
	end
	else begin
		set_digits(MAX_CLOCK_COUNT, 1);
	end
end
S_3MIN: begin
	if (timer % 2 == 0) begin
		set_digits(MAX_CLOCK_COUNT, 0);
	end
	else begin
		set_digits(MAX_CLOCK_COUNT, 1);
	end
end
S_COUNTING: begin
	set_digits(MAX_CLOCK_COUNT, 0);
end
S_RESET: begin
	set_digits(MAX_CLOCK_COUNT, 0);
end
S_RESET1: begin
	set_digits(MAX_CLOCK_COUNT, 0);
end
S_RESET2: begin
	set_digits(MAX_CLOCK_COUNT, 0);
end

endcase


/* Tasks */
task set_time;
	begin
		if (add1) begin
			timer = timer + 60;
			fix_timer_overflow();
		end
		else if (add2) begin
			timer = timer + 120;
			fix_timer_overflow();
		end
		else if (add3) begin
			timer = timer + 180;
			fix_timer_overflow();
		end
		else if (add4) begin
			timer = timer + 300;
			fix_timer_overflow();
		end
	end
endtask;

task set_next_state;
	begin
		if (timer < 1) begin
			next_state = S_ZERO;
		end
		else if (timer < 180) begin
			next_state = S_3MIN;
		end
		else begin
			next_state = S_COUNTING;
		end
	end
endtask;

task fix_timer_overflow;
	begin
		if (timer > MAX_TIMER) begin
			timer = MAX_TIMER;  
		end
	end
endtask;

task set_digits;
	// Identify the digits, call set_one_digit with each.
	input [6:0] cycle_time;
	input is_blank;

	begin
		val4 = timer / 1000;
		val3 = (timer % 1000) / 100;
		val2 = ((timer % 1000) % 100) / 10;
		val1 = ((timer % 1000) % 100) % 10;

		if (clock_count % 4 == 1) begin
			set_one_digit(val1, 1, is_blank); 
		end
		else if (clock_count % 4 == 2) begin
			set_one_digit(val2, 2, is_blank);
		end
		else if (clock_count % 4 == 3) begin
			set_one_digit(val3, 3, is_blank);
		end
		//else if (clock_count % 4 == 0) begin
		else begin
			set_one_digit(val4, 4, is_blank);
		end
	end

endtask;

task set_one_digit;
	input [3:0] digit; // this value indicates 0 - 9, used to calculate CA-CG
	input [2:0] position; // this value indicates a1-4
	input is_blank; // this value indicates if the digit should be completely blank

	begin
	// setting one digit on LED
	if (is_blank) begin
		led_seg = 7'b1111111;
	end
	else
	case(digit)

	0: begin
		led_seg = 7'b0000001;
	end
	1: begin
		led_seg = 7'b1001111;
	end
	2: begin
		led_seg = 7'b0010010;
	end
	3: begin
		led_seg = 7'b0000110;
	end
	4: begin
		led_seg = 7'b1001100;
	end
	5: begin
		led_seg = 7'b0100100;
	end
	6: begin
		led_seg = 7'b0100000;
	end
	7: begin
		led_seg = 7'b0001111;
	end
	8: begin
		led_seg = 7'b0000000;
	end
	9: begin
		led_seg = 7'b0000100;
	end

	endcase

	// identifying digit on LED
	case(position)

	1: begin
		a1 = 1'b0;
		a2 = 1'b1;
		a3 = 1'b1;
		a4 = 1'b1;
	end
	2: begin
		a1 = 1'b1;
		a2 = 1'b0;
		a3 = 1'b1;
		a4 = 1'b1;
	end
	3: begin
		a1 = 1'b1;
		a2 = 1'b1;
		a3 = 1'b0;
		a4 = 1'b1;
	end
	4: begin
		a1 = 1'b1;
		a2 = 1'b1;
		a3 = 1'b1;
		a4 = 1'b0;
	end

	endcase

	end
endtask;

endmodule