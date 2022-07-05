global _greater
section .text

_greater:
    push    rbp             ; create stack frame
    mov     rbp, rsp

    mov     eax, edi        ; grab the "base" argument
    mov     edx, esi        ; grab the "exponent" argument
    cmp     eax,edx
    jg      end
    mov     eax,edx
end:
    pop     rbp             ; restore the base pointer
    ret                     ; return from procedure