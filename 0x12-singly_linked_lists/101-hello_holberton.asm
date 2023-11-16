        global  main
        extern  printf

        section .data
msg:    db      "Hello, Holberton", 10, 0   ;
        section .text
main:
        push    rbx                     ; we have to save rbx

        mov     rdi, msg                ; set parameter (msg)
        xor     rax, rax                ; because printf is var args
        call    printf                  ; printf(msg)

        pop     rbx                     ; restore rbx before returning
        ret
