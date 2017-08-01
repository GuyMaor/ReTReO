`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:36:39 07/26/2017
// Design Name:   Reg_Block
// Module Name:   C:/Users/Guy/Documents/School/Research/ReTReO/Reg_Block_T.v
// Project Name:  ReTReO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Reg_Block
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Reg_Block_T;

	// Inputs
	reg [15:0] Data_In;
	reg [8:0] Addr_In;
	reg [6:0] Addr_Out;
	reg clk;

	// Outputs
	wire [15:0] Data_Out;

	// Instantiate the Unit Under Test (UUT)
	Reg_Block uut (
		.Data_In(Data_In), 
		.Data_Out(Data_Out), 
		.Addr_In(Addr_In), 
		.Addr_Out(Addr_Out), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		Data_In = 1;
		Addr_In = 0;
		Addr_Out = 0;
		
		
		
		clk = 0;
		#100;
		clk = 1;
		#100;
        
		Data_In = 2;
		Addr_In = 1;
		
		clk = 0;
		#100;
		clk = 1;
		#100;
        
		Data_In = 3;
		Addr_In = 2;

		clk = 0;
		#100;
		clk = 1;
		#100;
		
		Data_In = 7;
		Addr_In = 32;

		clk = 0;
		#100;
		clk = 1;
		#100;
		Addr_In = 33;
		Addr_Out = 1;

		clk = 0;
		#100;
		clk = 1;
		#100;
		
		Addr_Out = 0;

		clk = 0;
		#100;
		clk = 1;
		#100;
		
		Addr_Out = 7'b0000010;

		clk = 0;
		#100;
		clk = 1;
		#100;

		Addr_Out = 32;

		clk = 0;
		#100;
		clk = 1;
		#100;
		
	end
      
endmodule

