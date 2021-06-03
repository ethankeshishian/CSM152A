`timescale 1ns / 1ps
module vending_machine(
    input CLK,
    input RESET,
    input RELOAD,
    input CARD_IN,
    input [2:0] ITEM_CODE,
    input KEY_PRESS,
    input VALID_TRAN,
    output reg VEND,
    output reg INVALID_SEL,
    output reg [2:0] COST,
    output reg FAILED_TRAN
    );

parameter S_RESET = 5'b00000;
parameter S_RELOAD = 5'b00001;
parameter S_IDLE = 5'b00010;
parameter S_FIRST_DIGIT = 5'b00011;
parameter S_SECOND_DIGIT = 5'b00100;
parameter S_CARD_VALIDATION = 5'b00101;
parameter S_SUCCESS = 5'b00110;

parameter FD_0 = 5'b00111;
parameter FD_2 = 5'b01000;
parameter FD_3 = 5'b01001;
parameter FD_4 = 5'b01010;

parameter SD_1 = 5'b01011;
parameter SD_2 = 5'b01100;
parameter SD_3 = 5'b01101;
parameter SD_4 = 5'b01110;

parameter CV_1 = 5'b01111;
parameter CV_2 = 5'b10000;
parameter CV_3 = 5'b10001;
parameter CV_4 = 5'b10010;

parameter S_INVALID = 5'b10011;
parameter S_FAILED = 5'b10100;


reg [5:0] current_state = S_IDLE;
reg [5:0] next_state = S_IDLE;

reg [2:0] cost_internal = 3'b000;
reg [4:0] selection_internal = 5'b00000;

reg [3:0] stock_10 = 10;
reg [3:0] stock_11 = 10;
reg [3:0] stock_12 = 10;
reg [3:0] stock_13 = 10;
reg [3:0] stock_14 = 10;
reg [3:0] stock_20 = 10;
reg [3:0] stock_21 = 10;
reg [3:0] stock_22 = 10;
reg [3:0] stock_23 = 10;
reg [3:0] stock_24 = 10;


// Always block for next state, sequential
always @(posedge CLK) begin
	if (RESET) current_state <= S_RESET;
	else current_state <= next_state;
end

// Always block that decides next state, combinational
always @(*)
case (current_state)

S_RESET: begin
	// Resetting flags and variables
	cost_internal = 0;
	selection_internal = 0;
	VEND = 0;
	INVALID_SEL = 0;
	COST = 0;
	FAILED_TRAN = 0;

	// Resetting counters
	stock_10 = 4'b1010;
	stock_11 = 4'b1010;
	stock_12 = 4'b1010;
	stock_13 = 4'b1010;
	stock_14 = 4'b1010;
	stock_20 = 4'b1010;
	stock_21 = 4'b1010;
	stock_22 = 4'b1010;
	stock_23 = 4'b1010;
	stock_24 = 4'b1010;

	if (RESET) begin 
		next_state = S_RESET;	
	end
	else begin
		next_state = S_IDLE;
	end
end
S_RELOAD: begin
	// Resetting counters
	stock_10 = 4'b1010;
	stock_11 = 4'b1010;
	stock_12 = 4'b1010;
	stock_13 = 4'b1010;
	stock_14 = 4'b1010;
	stock_20 = 4'b1010;
	stock_21 = 4'b1010;
	stock_22 = 4'b1010;
	stock_23 = 4'b1010;
	stock_24 = 4'b1010;

	if (RESET) begin 
		next_state = S_RESET;	
	end
	else if (RELOAD) begin
		next_state = S_RELOAD;
	end
	else begin
		next_state = S_IDLE;
	end
end
S_IDLE: begin
	// Resetting flags and variables
	cost_internal = 0;
	selection_internal = 0;
	VEND = 0;
	INVALID_SEL = 0;
	COST = 0;
	FAILED_TRAN = 0;

	if (RESET) begin 
		next_state = S_RESET;	
	end
	else if (RELOAD) begin
		next_state = S_RELOAD;
	end
	else if (CARD_IN) begin
		next_state = S_FIRST_DIGIT;
	end
end
S_FIRST_DIGIT: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE == 1) begin
			cost_internal = 2;
			selection_internal = 9;//strange value but necessary
			next_state = S_SECOND_DIGIT;
		end	
		else if (ITEM_CODE == 2) begin
			cost_internal = 5;
			selection_internal = 18;//strange value but necessary
			next_state = S_SECOND_DIGIT;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
		next_state = FD_0;
	end
end
FD_0: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE == 1) begin
			cost_internal = 2;
			selection_internal = 9;
			next_state = S_SECOND_DIGIT;
		end	
		else if (ITEM_CODE == 2) begin
			cost_internal = 5;
			selection_internal = 18;
			next_state = S_SECOND_DIGIT;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
		next_state = FD_2;
	end
end
FD_2: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE == 1) begin
			cost_internal = 2;
			selection_internal = 9;
			next_state = S_SECOND_DIGIT;
		end	
		else if (ITEM_CODE == 2) begin
			cost_internal = 5;
			selection_internal = 18;
			next_state = S_SECOND_DIGIT;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
		next_state = FD_3;
	end
end
FD_3: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE == 1) begin
			cost_internal = 2;
			selection_internal = 9;
			next_state = S_SECOND_DIGIT;
		end	
		else if (ITEM_CODE == 2) begin
			cost_internal = 5;
			selection_internal = 18;
			next_state = S_SECOND_DIGIT;
		end
		else begin
			next_state = S_INVALID;
		end

	end
	else begin
		next_state = FD_4;
	end
end
FD_4: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE == 1) begin
			cost_internal = 2;
			selection_internal = 9;
			next_state = S_SECOND_DIGIT;
		end	
		else if (ITEM_CODE == 2) begin
			cost_internal = 5;
			selection_internal = 18;
			next_state = S_SECOND_DIGIT;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
		next_state = S_INVALID;
	end
end
S_SECOND_DIGIT: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE >= 0 && ITEM_CODE <= 4) begin
			selection_internal = selection_internal + ITEM_CODE;
			COST = cost_internal;
			next_state = S_CARD_VALIDATION;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
			next_state = SD_1;
	end
end
SD_1: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE >= 0 && ITEM_CODE <= 4) begin
			selection_internal = selection_internal + ITEM_CODE;
			COST = cost_internal;
			next_state = S_CARD_VALIDATION;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
			next_state = SD_2;
	end
end
SD_2: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE >= 0 && ITEM_CODE <= 4) begin
			selection_internal = selection_internal + ITEM_CODE;
			COST = cost_internal;
			next_state = S_CARD_VALIDATION;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
			next_state = SD_3;
	end
end
SD_3: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE >= 0 && ITEM_CODE <= 4) begin
			selection_internal = selection_internal + ITEM_CODE;
			COST = cost_internal;
			next_state = S_CARD_VALIDATION;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
			next_state = SD_4;
	end
end
SD_4: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (KEY_PRESS) begin
		if (ITEM_CODE >= 0 && ITEM_CODE <= 4) begin
			selection_internal = selection_internal + ITEM_CODE;
			COST = cost_internal;
			next_state = S_CARD_VALIDATION;
		end
		else begin
			next_state = S_INVALID;
		end
	end
	else begin
		next_state = S_INVALID;
	end
end
S_CARD_VALIDATION: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (VALID_TRAN) begin
		// decrement counters here
		check_stock(selection_internal);
	end
	else next_state = CV_1;
end
CV_1: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (VALID_TRAN) begin
		// decrement counters here
		check_stock(selection_internal);
	end
	else next_state = CV_2;
end
CV_2: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (VALID_TRAN) begin
		// decrement counters here
		check_stock(selection_internal);
	end
	else next_state = CV_3;
end
CV_3: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (VALID_TRAN) begin
		// decrement counters here
		check_stock(selection_internal);
	end
	else next_state = CV_4;
end
CV_4: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	if (VALID_TRAN) begin
		// decrement counters here
		check_stock(selection_internal);
	end
	else begin
		next_state = S_FAILED;
	end
end
S_SUCCESS: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	VEND = 1;
	next_state = S_IDLE;
end
S_INVALID: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	INVALID_SEL = 1;
	next_state = S_IDLE;
end
S_FAILED: begin
	if (RESET) begin 
		next_state = S_RESET;	
	end
	FAILED_TRAN = 1;
	next_state = S_IDLE;
end

endcase

task check_stock;
	input [5:0] selection;
	begin
		$write(selection);
		$write("\n");
	case (selection)
			10: begin
				if (stock_10 > 0) begin
					stock_10 = stock_10 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			11: begin
				if (stock_11 > 0) begin
					stock_11 = stock_11 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			12: begin
				if (stock_12 > 0) begin
					stock_12 = stock_12 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			13: begin
				if (stock_13 > 0) begin
					stock_13 = stock_13 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			14: begin
				if (stock_14 > 0) begin
					stock_14 = stock_14 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			20: begin
				if (stock_20 > 0) begin
					stock_20 = stock_20 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			21: begin
				if (stock_21 > 0) begin
					stock_21 = stock_21 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			22: begin
				if (stock_22 > 0) begin
					stock_22 = stock_22 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			23: begin
				if (stock_23 > 0) begin
					stock_23 = stock_23 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			24: begin
				if (stock_24 > 0) begin
					stock_24 = stock_24 - 1; 
					next_state = S_SUCCESS;
				end
				else begin
					next_state = S_INVALID;
				end
			end
			default: begin
				$write("Default");
					next_state = S_INVALID;
			end
		endcase
	end
endtask;


endmodule
