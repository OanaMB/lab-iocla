%include "../utils/printf32.asm"

section .data
    N dd 9 ; compute the sum of the first N fibonacci numbers
    print_format_1 db "Sum first %d", 10, 0
    print_format_2 db "fibo is %d", 10, 0

section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    push dword [N]
    push print_format_1
    call printf
    add esp, 8
    mov ecx, 9
    mov ebx, 1
    mov edx, 0
    mov eax, 0
    ; TODO: calculate the sum of first N fibonacci numbers
    ;       (f(0) = 0, f(1) = 1)
fibonacci:
    
    add ebx, edx
    add edx, ebx

    add eax, ebx
    add eax, edx
    ;xor eax, eax     ;store the sum in eax
    
    ; use loop instruction
loop fibonacci
    push eax
    push print_format_2
    call printf
    add esp, 8

    xor eax, eax
    leave
    ret
