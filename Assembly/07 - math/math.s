.MODEL SMALL
.CODE
ORG 100h
Proses :

MOV AH, 15h
MOV AL, 4
ADD AH, AL

  INT 20H
END Proses