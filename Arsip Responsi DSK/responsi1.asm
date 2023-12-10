.model small
.stack 100h

.data
deret db ?
hasil db ?
promptFak db 'Masukkan deret bilangan: $'
result db 13,10,'Hasil: $'

.code
MAIN PROC
    mov ax,@data
    mov ds,ax

    ; Print 'Masukkan panjang:'
    lea dx, promptFak
    mov ah, 09h
    int 21h

    ; Input panjang
    mov ah, 01h
    int 21h
    sub al, 30h  ; Convert from ASCII to integer
    mov deret, al

loop:
    ;hitung deret secara rekursif. Jika perulangan untuk perhitungan telah selesai, lompat ke print result. Contoh: 5+4+3+2+1+0
    cmp deret, 0
    je print_result
    mov al, hasil
    add al, deret
    mov hasil, al
    dec deret
    jmp loop

print_result:
    ; Print 'Hasil: '
    lea dx, result
    mov ah, 09h
    int 21h

    mov dl, hasil
    add dl, 30h
    mov ah, 02h
    int 21h


end:
MAIN ENDP
END MAIN
