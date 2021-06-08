//`timescale 1ns / 1ps
`timescale 1ms / 1ms

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:35:56 05/23/2021
// Design Name:   parking_meter
// Module Name:   /home/ise/CSM152A/lab4/testbench_105422235.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parking_meter
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
	reg add1;
	reg add2;
	reg add3;
	reg add4;
	reg rst1;
	reg rst2;
	reg clk;
	reg rst;

	// Instantiate the Unit Under Test (UUT)
	parking_meter uut (
		.add1(add1), 
		.add2(add2), 
		.add3(add3), 
		.add4(add4), 
		.rst1(rst1), 
		.rst2(rst2), 
		.clk(clk), 
		.rst(rst)
	);
/* Global variables */
parameter CLOCK = 10;
parameter SECOND = CLOCK * 100;
parameter CLOCK_CYCLE = 20;

	initial begin
		// Initialize Inputs
		add1 = 0;
		add2 = 0;
		add3 = 0;
		add4 = 0;
		rst1 = 0;
		rst2 = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		
		/* Testing reset */
		reset();		
		
		/* Testing zero state */
		wait_10_seconds();
		
		/* Testing single add1 */
		add60();
		wait_2_seconds();
		
		/* Testing single add2 */
		add120();
		wait_2_seconds();
		
		/* Testing single add3 */
		add180();
		wait_2_seconds();
		
		/* Testing single add4 */
		add300();
		wait_2_seconds();
		
		/* Testing reset1 */
		reset1();
		
		/* Testing reset2 */
		reset2();
		
		/* Testing greater than 180 state */
		reset();
		reset1();
		add180(); //195
		wait_10_seconds(); // 185
		wait_5_seconds(); // 180
		
		/* Testing transition for > 180 to <180 */
		wait_2_seconds();
		
		/* Testing less than 180 seconds state */
		wait_10_seconds();
		
		/* Testing transition from 1 second to 0 */
		reset();
		reset1();
		wait_10_seconds();
		wait_10_seconds();
		
		/* Testing overflow correction and multiple consecutive add presses*/
		reset();
		add_overflow();
		wait_10_seconds();
				
		/* Testing reset1 from non-zero value */
		reset1();
		
		/* Testing reset2 from non-zero value */
		reset2();
		
		/* Testing adding time in S_3MIN state to flashing number */
		reset1();
		wait_2_seconds();
		add60();
		wait_2_seconds();
		
		/* Testing rst1 from rst */
		rst = 1;
		#CLOCK_CYCLE;
		rst = 0;
		rst1 = 1;
		#CLOCK_CYCLE;
		rst1 = 0;
		wait_2_seconds;
		
		/* Testing rst2 from rst */
		rst = 1;
		#CLOCK_CYCLE;
		rst = 0;
		rst2 = 1;
		#CLOCK_CYCLE;
		rst2 = 0;
		wait_2_seconds;
				
		/* Testing rst2 from rst1 */
		rst1 = 1;
		#CLOCK_CYCLE;
		rst1 = 0;
		rst2 = 1;
		#CLOCK_CYCLE;
		rst2 = 0;
		wait_2_seconds;
		
		/* Testing rst1 from rst2 */
		rst2 = 1;
		#CLOCK_CYCLE;
		rst2 = 0;
		rst1 = 1;
		#CLOCK_CYCLE;
		rst1 = 0;
		wait_2_seconds;

		
		$finish;

	end
      
	always begin //consider changing #                
		clk = !clk;
		#CLOCK;
	end
	
/* Tasks */
//Resetting
task reset;
	begin
		rst = 1;
		#SECOND;
		rst = 0;
		#SECOND;
	end
endtask;

task reset1;
	begin
		rst1 = 1;
		#SECOND;
		rst1 = 0;
		#SECOND;
	end
endtask;

task reset2;
	begin
		rst2 = 1;
		#SECOND;
		rst2 = 0;
		#SECOND;
	end
endtask;

// Adding time
task add60;
	begin
		add1 = 1;
		#CLOCK;
		add1 = 0;
		#CLOCK;
	end
endtask;

task add120;
	begin
		add2 = 1;
		#CLOCK;
		add2 = 0;
		#CLOCK;
	end
endtask;

task add180;
	begin
		add3 = 1;
		#CLOCK;
		add3 = 0;
		#CLOCK;
	end
endtask;

task add300;
	begin
		add4 = 1;
		#CLOCK;
		add4 = 0;
		#CLOCK;
	end
endtask;

task add_overflow;
	begin 
		add4 = 1;
		#CLOCK;
		wait_for_overflow();
		add4 = 0;
		#CLOCK;
	end
endtask;

// Waiting
task wait_2_seconds;
	begin
		#(2 * SECOND);
	end
endtask;

task wait_3_seconds;
	begin
		#(3 * SECOND);
	end
endtask;


task wait_5_seconds;
	begin
		#(5 * SECOND);
	end
endtask;

task wait_10_seconds;
	begin
		#(10 * SECOND);
	end
endtask;

task wait_for_overflow;
	begin
		#(((10000 / 300) * CLOCK_CYCLE) + 3 * CLOCK_CYCLE );
	end
endtask;

endmodule

