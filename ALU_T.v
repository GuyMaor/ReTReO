`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:39:06 07/24/2017
// Design Name:   ALU
// Module Name:   C:/Users/Guy/Documents/School/Research/ALU/ALU_T.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_T;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg [3:0] op;

	// Outputs
	wire [15:0] out;
	wire [2:0] comp;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.out(out), 
		.op(op), 
		.comp(comp)
	);

	initial begin
		// Initialize Inputs
		op = 3'b0001;//sub
		A = 16'b0000000000000101;//5
		B = 16'b0000000000000010;//4
		//expected_comp = 3'b100;
		#100;
		A = 16'b0000000000000010;//4
		B = 16'b0000000000000101;//5
		//expected_comp = 3'b001;
		#100;
		A = 16'b0000000000000101;//5 
		B = 16'b0000000000000101;//5  		
		//expected_comp = 3'b010;
		#100
		A = 16'b1111111111111011;//-5
		B = 16'b1111111111111010;//-6
		//expected_comp = 3'b100;
		#100;
		A = 116'b1111111111111010;//-6
		B = 16'b1111111111111011;//-5
		//expected_comp = 3'b001;
		#100;
		A = 16'b0000000000000010;//4
		B = 16'b1111111111111010;//-6
		//expected_comp = 3'b100;
		#100;
		A = 16'b1111111111111010;//-6
		B = 16'b0000000000000010;//4
		//expected_comp = 3'b001;
		#100;
		A = 16'b1111111111111010;//-6
		B = 16'b1111111111111010;//-6
		//expected_comp = 3'b001;
		#100;
		op = 3'b0110;
		#100;
		op = 3'b0111;
		A = 16'b0000000000100100;//36 
		B = 16'b1111111111111010;//-6
	end
      
endmodule

