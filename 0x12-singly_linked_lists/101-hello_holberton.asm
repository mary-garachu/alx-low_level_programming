section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0   ; %s is the format specifier for a string, 10 represents the newline character, and 0 is the null terminator.

section .text
    global main
    extern printf

main:
    ; Call printf function with the hello_msg and format string
    mov rdi, format  ; Load the address of the format string to rdi (1st argument to printf)
    mov rsi, hello_msg  ; Load the address of the hello_msg to rsi (2nd argument to printf)
    xor rax, rax  ; Clear rax (to indicate no floating-point arguments)
    call printf   ; Call printf function

    ; Exit the program
    mov rax, 60  ; syscall number for exit
    xor rdi, rdi  ; exit status 0
    syscall

section .bss
    ; Define any uninitialized data here if needed

