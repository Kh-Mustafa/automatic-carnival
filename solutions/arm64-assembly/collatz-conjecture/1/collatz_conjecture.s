.equ INVALID_NUMBER, -1

.text
.globl steps

steps:
        mov x2, x0
        mov x1, #0           // x1 is our step counter
        mov x3, #3           // set x3 to be 3 for further calculations
        cmp x0, #0
        b.gt start

invalid:
        mov x0, #-1
        ret
start:
        cmp x2, #1
        b.eq done
        add x1, x1, #1
        tst x2, #1
        b.eq even

        mul x2, x2, x3
        add x2, x2, #1
        b start
even:
        lsr x2, x2, #1
        b start

done:
        mov x0, x1
        ret