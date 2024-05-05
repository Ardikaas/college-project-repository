  .MODEL SMALL
  .CODE
  ORG 100h
Proses :
  MOV AX, 1234h
  MOV BX, 9ABCh
  MOV CX, 5678h
  MOV DX, DEF0h
  ADD CX, DX
  ADC AX, BX

  INT 20h
END Proses