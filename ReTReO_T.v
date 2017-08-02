`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:02:59 08/02/2017
// Design Name:   ReTReO
// Module Name:   C:/Users/Guy/Documents/ReTReO/ReTReO/ReTReO_T.v
// Project Name:  ReTReO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ReTReO
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ReTReO_T;

	// Inputs
	reg [15:0] In_Reg;
	reg Override_Stall;
	reg clk;

	// Outputs
	wire [15:0] Out_Reg;
	//wire [15:0] TEST;//DELETE

	// Instantiate the Unit Under Test (UUT)
	ReTReO uut (
		.In_Reg(In_Reg), 
		.Out_Reg(Out_Reg), 
		.Override_Stall(Override_Stall), 
		.clk(clk)
	//	.TEST(TEST)//DELETE
	);

	initial begin
		// Initialize Inputs
		In_Reg = 16'b0000000000000100;
		Override_Stall = 0; 


		// Wait 100 ns for global reset to finish
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;
		clk = 1;
		#100;
 		clk = 0;
		#100;    		
		// Add stimulus here

	end
      
endmodule

