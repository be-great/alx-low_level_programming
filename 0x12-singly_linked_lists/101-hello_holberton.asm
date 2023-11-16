        global  main
        extern  printf

        section .data
msg:    db      "Hello, Holberton", 0
format:	db "%s", 10, 0
        section .text
main:
        mov     esi, msg                   ; set paramerter (msg)
        mov     edi, format                ; set format (%s)
        mov     eax, 0                     ; because printf is var args
        call    printf                     ; system call printf(format, msg)

        mov     eax, 0                     ; reset eax
        ret
