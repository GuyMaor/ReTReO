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
	/*initial
	begin
		mem[0] = 16'b0001001010100011; //in reg to reg A
		mem[1] = 16'b1000001110100010; //4 to reg B
		mem[2] = 16'b1000000010100111;
		mem[3] = 16'b0001010000100110; //store alu out in out reg
		mem[4] = 16'b0000000000100001;
	end*/

	//Test RAM
	/*initial
	begin
		mem[0] = 16'b1000001110101011; // store in ram data
		mem[1] = 16'b1000010100101010;// store in ram addr
		mem[2] = 16'b1000000000100100;//write en
		mem[3] = 16'b1000001000101011;
		mem[4] = 16'b0001011000100110;
		mem[5] = 16'b0000000000100001;
	end */

	//Test Reg Block
	/*
	initial
	begin
		mem[0] = 16'b1000010100101010;//grab from loc 10
		mem[1] = 16'b0001011000001111;//store in reg 15
		mem[2] = 16'b0000011110100110;
		mem[3] = 16'b0001011000100110;
		mem[10] = 16'd22;
	end */
	
	//Test Branch
	/*
	initial
	begin
		mem[0] = 16'b1000001010100011;	 //5 in b
	   mem[1] = 16'b1000001010000010;    //4 in a
	   mem[2] = 16'b1000000110101001; //store branch
		mem[3] = 16'b1000001100100000; //branch
	   mem[4] = 16'b1000000010100110; //store 1 in out
		mem[5] = 16'b0000000000100001; //stall
	   mem[6] = 16'b1000011110100110; //store 15 in out
		mem[7] = 16'b0000000000100001; //stall		
	end*/
	
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
