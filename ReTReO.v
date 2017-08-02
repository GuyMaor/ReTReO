`timescale 1ns / 1ps

module ReTReO(In_Reg,Out_Reg,Override_Stall,clk);
	parameter Data_Size = 16;
	parameter Addr_Size = 6;
	//In and Out reg ports
   input [Data_Size-1:0] In_Reg;//Source
   output [Data_Size-1:0] Out_Reg;//Dest
   input Override_Stall;
	reg [Data_Size-1:0] Out_Reg;
	input clk;
	//ALU ports
	reg [Data_Size-1:0] A_ALU_Reg;//Dest
	reg [Data_Size-1:0] B_ALU_Reg;//Dest
	reg [3:0] Op_ALU_Reg;//Dest
	wire [2:0] comp;
	wire [Data_Size-1:0] ALU_Out;//Src
	//PC Module ports
	reg [Addr_Size-1:0] Branch_Loc_Reg;//Dest
	wire [Addr_Size-1:0] PC_Addr;
	//RAM ports
	reg [Addr_Size-1:0] RAM_Addr_Reg;//Dest
	reg [Data_Size-1:0] RAM_Data_Reg;//Dest
	wire Write_En;
	wire [Data_Size-1:0] RAM_Out;//Src
	//Reg Block Ports
	wire [Data_Size-1:0] Reg_Block_Out;//Src
	
	//Address parameters
	parameter A_ALU_Addr = 7'b0100010;
	parameter B_ALU_Addr = 7'b0100011;
	parameter Write_En_Addr = 7'b0100100;
	parameter In_Reg_Addr = 9'b000100101; //SRC
	parameter Out_Reg_Addr = 7'b0100110;
	parameter ALU_Op_Reg_Addr = 7'b0100111;
	parameter ALU_Out_Addr = 9'b000101000; //SRC
	parameter Branch_Loc_Reg_Addr = 7'b0101001;
	parameter RAM_Addr_Reg_Addr = 7'b0101010;
	parameter RAM_Data_Reg_Addr = 7'b0101011;
	parameter RAM_Out_Addr = 9'b000101100; //SRC
	//Reg_Block_Out is a SRC

	
	//Stores data sent from the source. May possibly have problems.
	reg [Data_Size-1:0] src;
	
	//Instruction Register
	reg [15:0] Instr_Reg;
	wire [15:0] Instruction;
	wire [15:7] src_val;
	wire [6:0] dest_val;
	assign src_val = Instr_Reg[15:7];
	assign dest_val = Instr_Reg[6:0];
	
	
	assign Write_En = Instr_Reg[6:0]==Write_En_Addr;
	
	PC_Mod pcmod(Branch_Loc_Reg,Override_Stall,dest_val,PC_Addr,clk,src[2:0],comp);
	ALU alumod(A_ALU_Reg,B_ALU_Reg,ALU_Out,Op_Alu_Reg,comp);
	Reg_Block regblockmod(src,Reg_Block_Out,dest_val,src_val,clk);
	RAM rammod(clk,PC_Addr,RAM_Addr_Reg,Instruction,RAM_Out,RAM_Data_Reg,Write_En);
	
	always @ (src_val,In_Reg,ALU_Out,RAM_Out,Reg_Block_Out)
	begin
		if(src_val[8]==1)
			src = {8'b00000000,src_val[7:0]};
		else if(src_val[8:6]==0)
			src = Reg_Block_Out;
		else
		begin
			case(src_val)
				In_Reg_Addr: src = In_Reg;
				ALU_Out_Addr: src = ALU_Out;
				RAM_Out_Addr: src = RAM_Out;
			endcase
		end
	end
	
	always @ (posedge clk)
	begin
		case(dest_val)
			A_ALU_Addr: A_ALU_Reg = src;
			B_ALU_Addr: B_ALU_Reg = src;
			Out_Reg_Addr: Out_Reg = src;
			ALU_Op_Reg_Addr: Op_ALU_Reg = src;
			Branch_Loc_Reg_Addr: Branch_Loc_Reg = src;
			RAM_Addr_Reg_Addr: RAM_Addr_Reg = src;
			RAM_Data_Reg_Addr: RAM_Data_Reg = src;
		endcase
	end

endmodule
