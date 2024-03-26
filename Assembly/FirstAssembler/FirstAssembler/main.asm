;
; FirstAssembler.asm
;
; Created: 2024. 03. 26. 18:07:20
; Author : lajtaib
;


; Replace with your application code
.include "m328Pdef.inc"
	
	.Cseg
	.Org 0x00
Start:
	Ldi R16, 0xFF		;Set the port to output mode
	Ldi R17, 0x01		;Set LSB led to on
	Out DDRB, R16		;Use DDRB to set the port to output
	Out PORTB, R17		;Output data to the port

End:
	Rjmp End			;Stays here
