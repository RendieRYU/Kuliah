.MODEL SMALL
.STACK 100H
.DATA

INPUTMSG    DB "MASUKKAN ANGKA: $"
GANJIL      DB 13,10,"ANGKA YANG DIBERIKAN ADALAH BILANGAN GANJIL$"
GENAP       DB 13,10,"ANGKA YANG DIBERIKAN ADALAH BILANGAN GENAP$"
NUM         DW ?

.CODE

START:
    MOV AX, @DATA
    MOV DS, AX

    LEA DX, INPUTMSG
    MOV AH, 09H
    INT 21H

    MOV AX, 0
    MOV NUM, AX

    MOV DL, 10
    MOV BL, 0

ScanNum:
    MOV AH, 01H
    INT 21H

    CMP AL, 13
    JE EndScanNum
    
    MOV AH,0
    SUB AL, 48

    MOV CL, AL
    MOV AL, BL

    MUL DL

    ADD AL, CL
    MOV BL, AL

    JMP ScanNum

EndScanNum:
    MOV NUM, BX
    MOV AX, NUM
    MOV DX, 0000H
    XOR DX, DX
    MOV BX, 2
    DIV BX

;Loop for check is even and is odd
CheckEvenOdd:
    CMP DX, 0
    JE Even
    JMP Odd

Odd:
    LEA DX, GANJIL
    MOV AH, 09H
    INT 21H
    JMP Exit

Even:
    LEA DX, GENAP
    MOV AH, 09H
    INT 21H

Exit:
    MOV AH, 4CH
    INT 21H

END START
