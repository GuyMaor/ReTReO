`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:17:08 08/01/2017
// Design Name:   PC_Mod
// Module Name:   C:/Users/Guy/Documents/School/Research/ReTReO/PC_Mod_T.v
// Project Name:  ReTReO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC_Mod
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_Mod_T;

	// Inputs
	reg [5:0] branch_loc;
	reg stall_override;
	reg [6:0] dest;
	reg clk;
	reg [2:0] branch_args;
	reg [2:0] comp;

	// Outputs
	wire [5:0] out;

	// Instantiate the Unit Under Test (UUT)
	PC_Mod uut (
		.branch_loc(branch_loc), 
		.stall_override(stall_override), 
		.dest(dest), 
		.out(out), 
		.clk(clk), 
		.branch_args(branch_args), 
		.comp(comp)
	);

	initial begin
		// Initialize Inputs
		branch_loc = -2;
		stall_override = 0;
		dest = 0;
		branch_args = 0;
		comp = 3'b010;

		// Wait 100 ns for global reset to finish
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
		// Add stimulus here
		
		dest = 7'b0100001;
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
		
		stall_override = 1'b1;
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

		dest = 7'b0100000;
		branch_args = 3'b100;
		
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
		branch_args = 3'b110;
		
		clk = 0;		
		#100;
 		clk = 1;		
		#100;	

		dest = 7'b0000000;
		
		clk = 0;		
		#100;
 		clk = 1;		
		#100;   
		
		clk = 0;		
		#100;
 		clk = 1;		
		#100;
	end
      
endmodule

