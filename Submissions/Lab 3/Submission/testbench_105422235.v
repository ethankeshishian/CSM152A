`timescale 1ns / 1ps

module testbench_105422235;

	// Inputs
	reg CLK;
	reg RESET;
	reg RELOAD;
	reg CARD_IN;
	reg [2:0] ITEM_CODE;
	reg KEY_PRESS;
	reg VALID_TRAN;

	// Outputs
	wire VEND;
	wire INVALID_SEL;
	wire [2:0] COST;
	wire FAILED_TRAN;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.RELOAD(RELOAD), 
		.CARD_IN(CARD_IN), 
		.ITEM_CODE(ITEM_CODE), 
		.KEY_PRESS(KEY_PRESS), 
		.VALID_TRAN(VALID_TRAN), 
		.VEND(VEND), 
		.INVALID_SEL(INVALID_SEL), 
		.COST(COST), 
		.FAILED_TRAN(FAILED_TRAN)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RESET = 0;
		RELOAD = 0;
		CARD_IN = 0;
		ITEM_CODE = 0;
		KEY_PRESS = 0;
		VALID_TRAN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		RESET = 1;
		#100;
		// #105;
		RESET = 0;
		#20;
		
		// Task: Successful inexpensive transaction (check cost)
		reset();
		transaction(1, 4);
		
		// Task: Successful expensive transaction (check cost)
		reset();
		transaction(2, 4);
				
		// Task: Too long to press first button
		reset();
		CARD_IN = 1;
		#20;
		CARD_IN = 0;
		#200;
		
		// Task: Too long to press second button
		reset();
		CARD_IN = 1;
		#20;
		press(1);
		CARD_IN = 0;
		#200;
		
		// Task: Input 1 bad input
		reset();
		transaction(2, 4);
		
		// Task: Input 2 bad input
		reset();
		transaction(1, 5);
		
		// Task: Good input, card declines
		reset();
		CARD_IN = 1;
		#20;
		
		press(1);
		press(0);
		
		CARD_IN = 0;
		#120;

		// Task: Finishing vending machine
		reset();
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		transaction(2, 0);
		
		// Task: Reloading when not in idle
		CARD_IN = 1;
		#20;
		reload();
		#20;
		CARD_IN = 0;
		#100;
		
		// Task: Reloading
		reload();
		#100;
		
		// Task: Reset halfway through transaction
		CARD_IN = 1;
		#20;
		
		press(1);
		reset();
		press(3);
		
		CARD_IN = 0;
		#20;
		send_valid();
		
		// Task: Multiple purchases without removing card
		reset();
		CARD_IN = 1;
		#20;
		
		press(1);
		press(3);
		
		#20;
		send_valid();

		#40;
		
		press(1);
		press(3);
		
		#20;
		send_valid();

		#40;
		
		press(1);
		press(3);
		
		CARD_IN = 0;
		#20;
		send_valid();
		
		// Done
		reset();

		$finish;
	end
	always begin                    
		CLK = !CLK;
		#10;
	end

task reload;
	begin
		RELOAD = 1;
		#40;
		RELOAD = 0;
		#20;
	end
endtask;

task transaction;
	input [3:0] fd;
	input [3:0] sd;
	begin
		CARD_IN = 1;
		#20;
		
		press(fd);
		press(sd);
		
		CARD_IN = 0;
		#20;
		send_valid();
	end
endtask;
task press;
	input [3:0] code;
	begin
			KEY_PRESS = 1;
			ITEM_CODE = code;
			#20;
			
			KEY_PRESS = 0;
			#20;
	end
endtask;

task reset;
	begin
		RESET = 1;
		#40;
		RESET = 0;
		#40;
	end
endtask;

task send_valid;
	begin
		VALID_TRAN = 1;
		#20;
		VALID_TRAN = 0;
		#20;
	end
endtask;
      
endmodule

