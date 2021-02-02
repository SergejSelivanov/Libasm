section .text
            global _ft_strcmp

_ft_strcmp:
            mov rax, 0
            mov rcx, 0
            mov rbx, 0
            jmp start
start:
            mov al, byte[rdi + rcx]
            mov bl, byte[rsi + rcx]
            cmp al, bl
            jne end2
            cmp al, 0
            je end1
            inc rcx
            jmp start
end1:
            mov rax, 0
            ret
end2:
            sub rax, rbx
            ret
            