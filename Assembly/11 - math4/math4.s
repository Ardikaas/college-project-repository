  .MODEL SMALL
  .CODE
  ORG 100h
Proses :
  MOV DL, 18h
  INC DL

  INT 20h
END Proses