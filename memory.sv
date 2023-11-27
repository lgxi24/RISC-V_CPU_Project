module memory #(
    parameter DATA_WIDTH = 32, 
    parameter BYTE_WIDTH = 8
) (
    input  logic                        clk,
    input  logic                        WE,
    input  logic [DATA_WIDTH-1:0]    A,
    input  logic [DATA_WIDTH-1:0]    WD,
    output logic [DATA_WIDTH-1:0]    RD
);

    logic [BYTE_WIDTH-1:0] mem_array [32'h0001FFFF:32'h00000000]; 

    initial begin 
        $readmemh("gaussian.mem", mem_array, 32'h10000);
    end;

    assign RD = {mem_array[A+3], mem_array[A+2], mem_array[A+1], mem_array[A]};
        
    always_ff @(posedge clk) begin
        if (WE) begin
            mem_array[A] <= WD[7:0];
            mem_array[A+1] <= WD[15:8];
            mem_array[A+2] <= WD[23:16];
            mem_array[A+3] <= WD[31:24];
        end
    end 

endmodule
