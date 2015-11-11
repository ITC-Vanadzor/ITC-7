ASM

// mov Register1, Register2
// add R1, R2  - R1=R1+R2 result is in R1
// mul R3, R4  - R3=R3*R4 result is in R3
// jnz anylabel if result isn't 0
// jz  anylabel if result is 0
// ltl R5, R6   R5 = (R5<R6) result is in R5
// eql R7, R8   R7 = (R7==R8) result is in R7


   mov Ri, 0
   mov Rj, 0

.i_loop
   mov R5, Ri
   mov R6, Rn
   ltl 
   mov R1, Ri
   add [R1], 1
   mov [Ri], [R1]
   jnz .j_loop
   jz .end

.j_loop
   mov R5, Rj   / 
   mov R6, Rn     j <n
   ltl          /
   mov R1, Rj
   add [R1], 1     / j++
   mov [Rj], [R1] /
   mov R3, Ri
   mov R4, Rn      a[i][j] = a[0][0]+i*n+j
   mul R3, R4     
   mov R1, R3
   mov R2, Rj
   add [R3], R2    /  result is in R3
   mov R1, a00;
   mov R2, [R3]
   add R1, R2
   mov aij, R1
   mov R7, aij
   mov [R8], 2
   eql R7, R8
   jz .j_loop
   mov [R8], 0
   eql R7, R8
   jnz .j_loop
   mov [R8], 1
   eql R7, R8
   mov Rr, Ri
   mov Rc, Rj
   
   
.row_loop
   mov R5, Rr
   mov R6, Rn
   ltl 
   mov R1, Rr
   add [R1], 1
   mov [Rr], [R1]
   jnz .col_loop
   jz .res

.col_loop
    mov R5, Rc
   mov R6, Rn
   ltl 
   mov R1, Rc
   add [R1], 1
   mov [Rc], [R1]
   jnz .col_loop 
   mov R3, Rrow
   mov R4, Rn      a[row][col] = a[0][0]+row*n+col
   mul R3, R4     
   mov R1, R3
   mov R2, Rc
   add R3, R2    /  result is in R3
   mov R1, a00;
   mov R2, [R3]
   add R1, R2
   mov aij, R1
   mov R7, aij
   mov [aij], 2
   jz .row_loop
   
.res 
   mov R1, Rres
   add [R1], 1
   mov [Rres], [R1]
   

.end 
   
   
   
   
   
   
   
   
   

