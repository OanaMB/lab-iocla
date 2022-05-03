%include "../utils/printf32.asm"

section .text

extern printf
global main
main:
    ; numbers are placed in these two registers
    mov eax, 1
    mov ebx, 4 

    ; TODO: get maximum value. You are only allowed to use one conditional jump and push/pop instructions.
    cmp eax,ebx
    jge print   
    PRINTF32 `eax: %d\n\x0`, eax 
    PRINTF32 `ebx: %d\n\x0`, ebx
    push eax
    push ebx
    pop eax
    pop ebx
   
print:
    PRINTF32 `Max value is eax: %d\n\x0`, eax ; print maximum value
    PRINTF32 `Min value is ebx: %d\n\x0`, ebx ; print minimum value
    ;pop ebx
    ret
