`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:16:06 04/08/2021
// Design Name:   FPCVT
// Module Name:   /home/ise/CSM152A/Lab1/testbench_105422235.v
// Project Name:  Lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_105422235;

	// Outputs
	reg [12:0] D;
	wire S;
	wire [2:0] E;
	wire [4:0] F;

	

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D),
		.S(S),
		.E(E),
		.F(F)
	);

	initial begin
		// Initialize Inputs
		D = 13'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		D = 13'b1_1111_1111_1111;
		#100;
		
		D = 13'b0_0000_0000_0001;
		#100;
		
		
		D = 13'b1_0001_0001_0001;
		#100;

		D = 13'b1_0000_0000_0001; // becomes 0_1111...1
		#100;
		
		D = 13'b1_0000_0000_0000; // -4096
		#100;
		
		D = 13'b0_1111_1111_1111; //largest positive case
		#100 $finish;
		// Add stimulus here

	end
      
endmodule

