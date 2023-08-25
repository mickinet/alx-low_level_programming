extern printf
global   main
main:
     xor eax, eax
     call printf
     mov   edi, format
     mov   eax, 0
     ret
format: db `Hello, Holberton\n`,0
