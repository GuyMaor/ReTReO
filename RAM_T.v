`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:25:35 07/23/2017
// Design Name:   RAM
// Module Name:   C:/Users/Guy/Documents/School/Research/ReTReO/RAM_T.v
// Project Name:  ReTReO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM_T;

	// Inputs
	reg clk;
	reg [3:0] addr_a;
	reg [3:0] addr_b;
	reg [3:0] in_data;
	reg write_en;

	// Outputs
	wire [15:0] data_a;
	wire [15:0] data_b;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clk(clk), 
		.addr_a(addr_a), 
		.addr_b(addr_b), 
		.data_a(data_a), 
		.data_b(data_b), 
		.in_data(in_data), 
		.write_en(write_en)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		addr_a = 0;
		addr_b = 0;
		in_data = 4;
		write_en = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 1;
		#100;
		clk = 0;
	
		write_en = 1;
		in_data = 5; 
 
		#100;
		clk = 1;
		#100;
		clk = 0;
		
		write_en = 1;
		
		#100;
		clk = 1;
		#100;
		clk = 0;
	end
      
endmodule

