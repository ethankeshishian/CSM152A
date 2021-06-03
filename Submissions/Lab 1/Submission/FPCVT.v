`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:00:35 04/08/2021 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT( S, E, F, D
    );
input [12:0] D;
output reg S;
output reg [2:0] E;
output reg [4:0] F;

wire MSB;
reg [12:0] converted;
reg [4:0] leadingZeros;
reg foundZeros;
reg [4:0] i;

assign MSB = D[12];

always @(MSB) begin // Outputing S
	S = MSB;
end

always @(D or MSB) begin //Convert to sign magnitude
	if (D == 13'b1_0000_0000_0000) begin //handling problem case
		converted = 13'b0_1111_1111_1111;
	end
	else begin
		if (MSB == 1) converted = ~D + 1;
		else if (MSB == 0) converted = D;
	end
end

always @(converted) begin 
	leadingZeros = 0;
	foundZeros = 0;
	i = 0;
	//Get leading zeros
	for (; i < 14; i = i+1) begin
		if (leadingZeros == 13) foundZeros = 1;
		if (foundZeros == 1);
		else if (converted[12 - leadingZeros] == 1) foundZeros = 1;
		else leadingZeros = leadingZeros + 1;
	end
	// Setting E and F
	if (leadingZeros >= 8) begin
		E = 0;
		F = converted[4:0];
	end
	else begin
		E = 8 - leadingZeros;
		F =  converted[(12 - leadingZeros) -: 5];
		
		// rounding
		if (converted[12 - 5 - 1 - leadingZeros] == 1) begin
			if (F == 5'b11111) begin
				if (E == 7);
				else begin
					E = E + 1;
					F = (F + 1) >> 1;
				end
			end
			else F = F + 1;
		end
	end	
end

endmodule


