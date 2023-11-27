//This module is managed by Guanxi Lu
//Need to decode for 
//R-type: add, sub, and
//I-type: addi, lw, lbu
//S-type: sw, sb
//B-type: beq, bne
module ALU_decode(
    input logic         op5, 
    input logic [2:0]   func3, 
    input logic         func75, 
    input logic [1:0]   ALUOp,
    output logic [2:0]  ALUControl
);

logic [2:0] decode;


assign decode = {op5, func75};

always_comb begin
    if (ALUOp == 2'b00) ALUControl = 3'b000; //add 
    else if (ALUOp == 2'b01) ALUControl = 3'b001; //sub
    else if (ALUOp == 2'b10) begin
        if (func3 == 3'b000) begin
            if (decode == 2'b00) ALUControl = 3'b000; //add
            else if (decode == 2'b01) ALUControl = 3'b000; //add
            else if (decode == 2'b10) ALUControl = 3'b000; //add
            else if (decode == 2'b11) ALUControl = 3'b001; //sub
        end
        else if (func3 == 3'b010) ALUControl = 3'b101; //slt
        else if (func3 == 3'b110) ALUControl = 3'b011; //or
        else if (func3 == 3'b111) ALUControl = 3'b010; //and
    end
    else if (ALUOp == 2'b11) begin
        if (op5 == 0) ALUControl = 3'b000; // add
        else if (op5 == 1) ALUControl = 3'b110; // extract out SrcB
    end
    else ALUControl = 3'b000;
end

endmodule
