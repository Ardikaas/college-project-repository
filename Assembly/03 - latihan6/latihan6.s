  .MODEL SMALL
  .CODE
  ORG 100h
proses : 
  MOV AH, 09h
  MOV BL, 93h
  MOV CX, 6h
ulang : 
  INT 10h
  ADD BL, 1

  LOOP ulang
mov AH, 02h
mov DL, 41h
INT 21h
mov DL, 49h
INT 21h
mov DL, 53h
INT 21h
mov DL, 59h
INT 21h
mov DL, 41h
INT 21h
mov DL, 48h
INT 21h
INT 20h
END Proses