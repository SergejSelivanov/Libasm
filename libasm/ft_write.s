section .text
            global _ft_write
            extern ___error

_ft_write:
            mov rax, 0x02000004
            syscall
            jc errno
            ret
errno:
            push rax
            call ___error
            pop rdx
            mov [rax], rdx
            mov rax, -1
            ret