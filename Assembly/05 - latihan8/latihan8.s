.MODEL SMALL
.CODE
ORG 100H
proses : 
  jmp ulang 
  vkal db 'my name is estu sinduningrum$'
ulang : 
  MOV DL, VKAL[BX]
  MOV AH, 02H
  INT 21H
  INC BX
  MOV AX, BX
  CMP AX, 14
  JE EXIT
  JMP ulang

EXIT : INT 20H
END proses