`timescale 1ns / 1ps

module ALU(A,B,out,op,comp);
	parameter data_size = 16;

   input [data_size - 1:0] A;
   input [data_size - 1:0] B;
   output [data_size - 1:0] out;
	input [3:0] op;
   output [2:0] comp;
	reg [data_size - 1:0] out;  
	reg [2:0] comp;
	wire is_equal = A==B;
	wire is_greater = ($signed(A) > $signed(B));
	parameter ADD_OP = 3'b0000;
	parameter SUB_OP = 3'b0001;
	parameter AND_OP = 3'b0010;
	parameter OR_OP = 3'b0011;
	parameter NOT_OP = 3'b0100;
	parameter XOR_OP = 3'b0101;
	parameter MUL_OP = 3'b0110;
	parameter DIV_OP = 3'b0111;
	always @ (A or B or op)
	case(op)
		ADD_OP: out = A+B;
		SUB_OP: out = A-B;
		AND_OP: out = A&B;
		OR_OP: out = A|B;
		NOT_OP: out = ~A;
		XOR_OP: out = A^B;
		MUL_OP: out = ($signed(A) * $signed(B));
		DIV_OP: out = ($signed(A) / $signed(B));
		default: out = 16'b0;
	endcase
	always @ (is_equal,is_greater)
	begin
	if(is_equal)
		comp = 3'b010;
	else if(is_greater)
		comp = 3'b100;
	else
		comp = 3'b001;
	end
endmodule