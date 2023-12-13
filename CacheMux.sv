module CacheMux #(
    parameter Data_Width =32
) (
    input logic         hit,
    input logic[Data_Width-1:0] cacheInput,
    input logic[Data_Width-1:0] memInput,
    output logic[Data_Width-1:0] Moutput
);
    assign Moutput = hit ? cacheInput:memInput;
endmodule
