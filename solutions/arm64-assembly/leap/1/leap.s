.text
.globl leap_year

leap_year:
        mov x1, x0
        tst x1, #3
        b.eq isDivOneHund

        mov x0, #0
        ret
        
isDivOneHund:
       mov x2, #100
       mov x1, x0
       udiv x3, x1, x2
       mul x4, x3, x2
       sub x4, x1, x4

       cmp x4, #0
       b.eq isDivFourHund
       
        mov x0, #1
        ret

isDivFourHund:
        mov x2, #400
        mov x1, x0
        udiv x3, x1, x2
        mul x4, x3, x2
        sub x4, x1, x4
        
        cmp x4, #0
        
        b.eq isLeap

        mov x0, #0
        ret
        
isLeap:
        mov x0, #1
        ret
        