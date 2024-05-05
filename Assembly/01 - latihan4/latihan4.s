.MODEL SMALL
.CODE
ORG 100h
proses : 
  MOV AH, 9h
  MOV BL, 96h
  MOV CX, 26
ulang : 
  INT 10h
  ADD BL, 1
  LOOP ulang
  MOV AH, 2h
  MOV DL, 'A'
  MOV CX, 26
dua : 
  INT 21h
  ADD DL, 1
  LOOP dua
  INT 20h
END proses