.Model Small
.Code
ORG 100h
Tdata :
  JMP Proses
  ALo   Equ   0EFFFH
  AHi   Equ   122h
  BLo   Equ   0FFFFH
  BHi   Equ   0FEh
  HslLo dw    ? 
  HslLi dw    ? 
Proses : 
  MOV   AX, ALo
  SUB   AX, BLo
  MOV   HslLo, AX
  MOV   AX, AHi
  SBB   AX, BHi
  MOV   HslLi, AX
  INT   20h
END Tdata