`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:48 07/25/2017 
// Design Name: 
// Module Name:    Reg_Block 
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
module Reg_Block(Data_In,Data_Out,Addr_In, Addr_Out,clk);

	 parameter IN_ADDR_WIDTH = 7;//Only changes
	 parameter OUT_ADDR_WIDTH = 9;//Only Changes
	 parameter ACTUAL_ADDR_WIDTH = 5;
	 parameter DATA_WIDTH = 16 ;
	 parameter REG_DEPTH = 1<<ACTUAL_ADDR_WIDTH;
	 input clk;
    input [DATA_WIDTH-1:0] Data_In;
    output [DATA_WIDTH-1:0] Data_Out;
    input [IN_ADDR_WIDTH-1:0] Addr_In;
    input [OUT_ADDR_WIDTH-1:0] Addr_Out;
    reg [DATA_WIDTH-1:0] Data_Out;
	 reg [ACTUAL_ADDR_WIDTH-1:0] reg_block [0:REG_DEPTH-1];
	 
	always @ (posedge clk)
	begin
		if(Addr_In[IN_ADDR_WIDTH-1:ACTUAL_ADDR_WIDTH]==0)
			reg_block[Addr_In[ACTUAL_ADDR_WIDTH-1:0]] = Data_In;
	end
	
	always @ (Addr_Out)
	begin
		if(Addr_Out[OUT_ADDR_WIDTH-1:ACTUAL_ADDR_WIDTH]==0)
			Data_Out = reg_block[Addr_Out[ACTUAL_ADDR_WIDTH-1:0]];
		else
			Data_Out = 0;
	end
	

endmodule
