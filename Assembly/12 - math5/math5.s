.MODEL SMALL
.CODE
ORG 100h
MOV AH, 15h
MOV AL, 4
ADD AH, AL
MOV AX, 1234h
MOV BX, 0F221h
ADD AX, BX
MOV AX, 1234h
MOV BX, 9ABCh
MOV CX, 5678h
MOV DX, 0DEF0h
ADD CX, DX
ADC AX, BX
INC AL
INT 20h
END Proses