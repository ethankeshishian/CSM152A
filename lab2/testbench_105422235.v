`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:25:26 04/08/2021
// Design Name:   clock_gen
// Module Name:   /home/ise/CSM152A/lab2/testbench_105422235.v
// Project Name:  lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_gen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_105422235;

	// Inputs
	reg clk_in;
	reg rst;

	// Outputs
	wire clk_div_2;
	wire clk_div_4;
	wire clk_div_8;
	wire clk_div_16;
	wire clk_div_32;
	wire clk_div_26;
	wire clk_div_3;
	wire clk_pos;
	wire clk_neg;
	wire clk_div_5;
	wire clk_div;
	wire [7:0] toggle_counter;

	// Instantiate the Unit Under Test (UUT)
	clock_gen uut (
		.clk_in(clk_in), 
		.rst(rst), 
		.clk_div_2(clk_div_2), 
		.clk_div_4(clk_div_4), 
		.clk_div_8(clk_div_8), 
		.clk_div_16(clk_div_16), 
		.clk_div_32(clk_div_32), 
		.clk_div_26(clk_div_26), 
		.clk_div_3(clk_div_3), 
		.clk_pos(clk_pos), 
		.clk_neg(clk_neg), 
		.clk_div_5(clk_div_5), 
		.clk_div(clk_div), 
		.toggle_counter(toggle_counter)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		#10;
      rst = 0;  
		// Add stimulus here

	end
	always begin			
		clk_in = !clk_in;
		#10;
	end

endmodule

