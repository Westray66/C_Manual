     .text
     .global _sumof4numbers
     .global _sumof5numbers
     .global _example_42

_sumof4numbers:
     add     r0,r0,r1
     add     r0,r0,r2
     add     r0,r0,r3
     add     r0,r0,r4
     bx      lr

_sumof5numbers:
     add     r0,r0,r1
     add     r0,r0,r2
     add     r0,r0,r3
     add     r0,r0,r4
     ldmia   sp!,{r2}
     add     r0,r0,r2 
     bx      lr

_example_42:
    push    {r4-r6,r14}  // prologue - preserve
    mov     r4,#40
    mov     r5,#2
    add     r0,r4,r5
    pop     {r4-r6,r15}  // epilogue - restore

    .end
