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
   mov R5, Ri  // R5 = Ri
   mov R6, Rn  // R6 = Rn
   ltl         // R5<R6 (i<n))
   mov [R1], [Ri]  // R1 = Ri
   add [R1], 1     // R1 = R1 + 1
   mov [Ri], [R1]  // Ri = R1 (i++)
   jnz .j_loop     // entering j loop
   jz .end         // if i >= n 

.j_loop
   mov R5, Rj     // R5 = Rj
   mov R6, Rn     // R6 = Rn
   ltl            // R5<R6 (j <n)
   mov R1, Rj     // R1, Rj
   add [R1], 1    // j++
   mov [Rj], [R1] // Rj = R1
   mov R3, Ri     // R3 = Ri
   mov R4, Rn     //a[i][j] = a[0][0]+i*n+j
   mul R3, R4     // R3 = R3*R4  (i*n)
   mov R1, R3     // R1 = R3 
   mov R2, Rj     // R2 = Rj
   add [R3], R2   // R3 = R3 + R2 (i*n+j) result is in R3
   mov R1, a00;   // R1 = a00 (&a[0][0])
   mov R2, [R3]   // R2 = R3 (R2 = i*n+j)
   add R1, R2     // R1 = R1+R2 (a[i][j])
   mov aij, R1    // aij = R1
   mov R7, aij    // R7 = aij
   mov [R8], 2    // R8 = 2
   eql R7, R8     // if (a[i][j] == 2)
   jz .j_loop     // if not ! = 2
   mov [R8], 0    // R8 = 0
   eql R7, R8     // if (a[i][j] == 0)
   jnz .j_loop    // if ! = 0
   mov [R8], 1    // R8 = 1
   eql R7, R8     // if (a[i][j] == 1)
   mov Rr, Ri     // entering row_loop
   mov Rc, Rj     // entering col_loop
   
   
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
   mov R4, Rn     // a[row][col] = a[0][0]+row*n+col
   mul R3, R4     
   mov R1, R3
   mov R2, Rc
   add R3, R2     // result is in R3
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
   
   
   
   
   
   
   
   
   

