%include "printf32.asm"

section .data
    myString: db "Hello, World!", 0
    mystring2: db "Goodbye, World!", 0

section .text
    global main
    extern printf

main:
    mov ecx, 6                      ; N = valoarea registrului ecx
    mov eax, 2
    mov ebx, 0
    cmp ebx, ecx
    jl print
    ;add ebx,1
    ;cmp ebx, eax
    ;jl print   
    ;cmp eax, ebx
    ;jl ret                     ; TODO1: eax > ebx?
    jmp print2
    ret

print:
    PRINTF32 `%s\n\x0`, myString              ; TODO2.2: afisati "Hello, World!" de N ori
    cmp ecx,0
    dec ecx
    ja print
print2:
     PRINTF32 `%s\n\x0`, mystring2   ; TODO2.1: afisati "Goodbye, World!"
     je ret
ret:
    ret
