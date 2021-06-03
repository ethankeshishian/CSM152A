`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:37 04/08/2021 
// Design Name: 
// Module Name:    clock_gen 
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
module clock_gen(
	input clk_in,
	input rst,
	output clk_div_2,
	output clk_div_4,
	output clk_div_8,
	output clk_div_16,
	output clk_div_32,
	output clk_div_26,
	output clk_div_3,
	output clk_pos,
	output clk_neg,
	output clk_div_5,
	output clk_div,
	output [7:0] toggle_counter
);

clock_div_two task1(
	.clk_in (clk_in),
	.rst (rst),
	.clk_div_2(clk_div_2),
	.clk_div_4(clk_div_4),
	.clk_div_8(clk_div_8),
	.clk_div_16(clk_div_16)
);
clock_div_thirty_two task2 (
	.clk_in(clk_in),
	.rst(rst),
	.clk_div_32(clk_div_32)
);
clock_div_twenty_six task3(
	.clk_in (clk_in),
	.rst (rst),
	.clk_div_26 (clk_div_26)
);
clock_div_three task456(
	.clk_in(clk_in),
	.rst(rst),
	.clk_div_3(clk_div_3),
	.clk_pos(clk_pos),
	.clk_neg(clk_neg)
);
clock_div_five task7(
	.clk_in (clk_in),
	.rst (rst),
	.clk_div_5 (clk_div_5)
);
clock_pulse task8(
	.clk_in(clk_in),
	.rst(rst),
	.clk_div(clk_div)
);
clock_strobe task9(
	.clk_in (clk_in),
	.rst (rst),
	.toggle_counter (toggle_counter)
);
endmodule
// task 1
module clock_div_two(clk_in, rst, clk_div_2, clk_div_4,
clk_div_8, clk_div_16);

input clk_in, rst;
output clk_div_2, clk_div_4, clk_div_8, clk_div_16;

reg [3:0] a = 4'b0000;

always @(posedge clk_in) begin
	if (rst) a <= 4'b0000;
	else a <= a + 1'b1;	
end
assign clk_div_2 = a[0];
assign clk_div_4 = a[1];
assign clk_div_8 = a[2];
assign clk_div_16 = a[3];

endmodule

// task 2
module clock_div_thirty_two(clk_in, rst, clk_div_32);
input clk_in, rst;
output reg clk_div_32 = 0;
reg [3:0] a = 4'b0000;

always @(posedge clk_in) begin
	if (rst) a <= 4'b0000;
	else  a <= a + 1'b1;	

	if (a == 4'b1111) clk_div_32 <= !clk_div_32;
end
endmodule

// task 3
module clock_div_twenty_six(clk_in, rst, clk_div_26);
input clk_in, rst;
output reg clk_div_26 = 0;

reg [3:0] a = 4'b0000;

always @(posedge clk_in) begin
	if (rst) a <= 4'b0000;
	else  a <= a + 1'b1;	

	if (a == 12) begin
		clk_div_26 <= !clk_div_26;
		a <= 4'b0000;
	end
end

endmodule

// task 4, 5, 6
module clock_div_three(clk_in, rst, clk_div_3, clk_pos,
clk_neg);
input clk_in, rst;
output clk_div_3;
output reg clk_pos = 0, clk_neg = 0;


reg [3:0] a = 4'b0000;
reg [3:0] b = 4'b0000;

always @(posedge clk_in) begin
	if (rst) a <= 4'b0000;
	else  a <= a + 1'b1;	

	if (a == 2) begin
		a <= 4'b0000;
	end	
	if (a == 1) clk_pos <= 1;
	else clk_pos <= 0;
end

always @(negedge clk_in) begin
	if (rst) b <= 4'b0000;
	else  b <= b + 1'b1;	

	if (b == 2) begin
		b <= 4'b0000;
	end	
	if (b == 1) clk_neg <= 1;
	else clk_neg <= 0;
end

assign clk_div_3 = clk_pos | clk_neg;
endmodule

// task 7
module clock_div_five(clk_in, rst, clk_div_5);
input clk_in, rst;
output clk_div_5;

reg clk_pos = 0, clk_neg = 0;
reg [3:0] a = 4'b0000; reg [3:0] b = 4'b0000;

always @(posedge clk_in) begin
	if (rst) a <= 4'b0000;
	else  a <= a + 1'b1;	

	if (a == 4) begin
		a <= 4'b0000;
	end	
	if (a == 2 || a == 3) clk_pos <= 1;
	else clk_pos <= 0;
end

always @(negedge clk_in) begin
	if (rst) b <= 4'b0000;
	else  b <= b + 1'b1;	

	if (b == 4) begin
		b <= 4'b0000;
	end	
	if (b == 2) clk_neg <= 1;
	else clk_neg <= 0;
end

assign clk_div_5 = clk_pos | clk_neg;
endmodule

// task 8
module clock_pulse(clk_in, rst, clk_div);
input clk_in, rst;
output reg clk_div = 0;

reg [6:0] a = 7'b0000000;
reg internal_clock = 0;
reg flip_bit = 0;

always @(posedge clk_in) begin
	if (rst) a <= 7'b0000000;
	else  a <= a + 1'b1;	

	if (a == 99) begin
		a <= 7'b0000000;
	end
	if (a==1) flip_bit <= 1;
	else flip_bit <= 0;
end

always @(posedge clk_in) begin
	if (flip_bit) clk_div <= !clk_div;
end

endmodule

// task 9
module clock_strobe(clk_in, rst, toggle_counter);
input clk_in, rst;
output reg [7:0] toggle_counter = 0;


reg [2:0] a = 3'b000;

always @(posedge clk_in) begin
	if (rst) a <= 3'b000;
	else  begin 
		a <= a + 1'b1;
		if (a == 3) begin
			a <= 3'b000;
			toggle_counter <= toggle_counter - 5;
		end
		else toggle_counter <= toggle_counter + 3;
	end
end

endmodule
