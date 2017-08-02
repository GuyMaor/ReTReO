`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:59 07/23/2017 
// Design Name: 
// Module Name:    RAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RAM(clk, addr_a, addr_b, data_a, data_b, in_data,write_en);
	 parameter ADDR_WIDTH = 6 ;
	 parameter DATA_WIDTH = 16 ;
	 parameter RAM_DEPTH = 1 << ADDR_WIDTH;
	 input clk ;
    input [ADDR_WIDTH-1:0] addr_a ;
    input [ADDR_WIDTH-1:0] addr_b ;
    output [DATA_WIDTH-1:0] data_a ;
    output [DATA_WIDTH-1:0] data_b ;

    input [DATA_WIDTH-1:0] in_data ; 
	 input write_en;
	 reg [DATA_WIDTH-1:0] mem [RAM_DEPTH-1:0];

	//Test ALU
	initial
	begin
		mem[0] = 16'b0001001010100011; //in reg to reg A
		mem[1] = 16'b1000001110100010; //4 to reg B
		mem[2] = 16'b1000000010100111;
		mem[3] = 16'b0001010000100110;
		mem[4] = 16'b0000000000100001;
	end 
	/*
	initial
	begin
		mem[0] = ;
		mem[1] = ;
		mem[2] = ;
		men[3] = ;
		mem[4] = ;
	end */
	
	always @ (posedge clk) 
	begin
		if(write_en)
		begin
			mem[addr_b] <= in_data;
		end
	end


	assign data_b = mem[addr_b];
	assign data_a = mem[addr_a];

endmodule
