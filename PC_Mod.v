`timescale 1ns / 1ps

//branch_args are the last 3 lsb of src.
module PC_Mod(branch_loc,stall_override,dest,out,clk,branch_args,comp);
	 parameter ADDR_WIDTH = 6;
    input [ADDR_WIDTH -1:0] branch_loc;
    input stall_override;
    input [6:0] dest;
	 wire comp_result;
	 wire should_branch;
	 wire should_stall;
    output [ADDR_WIDTH - 1:0] out;
	 input clk;
	 input [2:0] branch_args;
	 input [2:0] comp;
	 parameter STALL_ADDR = 7'b0100001;
	 parameter BRANCH_ADDR = 7'b0100000;
	 reg [ADDR_WIDTH -1:0] out;
	 reg [ADDR_WIDTH -1:0] pc;


	initial
	begin
		pc = 6'b111111;
	end
	 
	 assign comp_result = (branch_args[0] & comp[0])|(branch_args[1] & comp[1])|(branch_args[2] & comp[2]);
	 assign should_branch = (dest == BRANCH_ADDR) & comp_result;
	 assign should_stall = (dest==STALL_ADDR) & (~stall_override);
	 
	 always @ (should_branch,should_stall,pc,branch_loc)
	 begin
	 if(should_branch)
		out = branch_loc + pc;
	 else if(should_stall)
		out = pc;
	 else
		out = pc + 1;
	 end

	always @ (posedge clk)
	begin
		pc = out;
	end
endmodule
