%include "../utils/printf32.asm"

section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    mov eax, 211    ; to be broken down into powers of 2
    mov ebx, 1      ; stores the current power


loop:

    test eax, ebx
    jnz print
    cmp ebx,eax
    jl loop2
    jmp exit

loop2:
    shl ebx,1
    jmp loop

    ; TODO - print the powers of 2 that generate number stored in EAX

print:
    PRINTF32 `%d\n\x0`, ebx
    shl ebx, 1
    jmp loop

exit:
    leave
    ret
