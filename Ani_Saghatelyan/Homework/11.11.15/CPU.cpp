/* ALU
   Sum(int)   f2=f1+f2
   Sub(int)   f3=f3-f4
   Mult(int)  f5=f5*f6
   Div(int)   f7=f7/f8
   Comp(int)  f11=(f9<f10)
   Equal(int) f14=(f12==f13)
*/ 

// mov
// jnz -ete 0 chi jump
// jz- ete 0 e jump
//  f14, f15, f16, f17, f18  registorner   RAM -ic inch vor hascener pahelu hamar

// Xndri  tvyalner
// 0-10 hascenerum a[i][j]-n e, 11 hasceum n, 12-um i, 13-um j, 14-um 1, 15-um row, 16-um column, 25-um result
// f14 - n
// f15 - 1
// f16 -result
// f17 - i
// f18 - j
// f19 -&(a[0][0])
// f20 row
// f21 column
// f25-result

mov [f14], [11]// n@ texapoxecinq f14 registor
mov [f14], 0  // veragrecinq 0
mov [f17], [12]// i-n texapoxecinq f17 registor
mov [f17], 0  // veragrecinq 0
mov [f18], [13]// j-n texapoxecinq f18 registor
mov [f18], 0 // veragrecinq 0

.i
   	cmp [f17], [f14]  // i<n
   	jz .result // ete 0 e jump result
.j
   	cmp [f18], [f14]  // j<n
   	jz .i  //ete 0 e jump  i
        mov [f19], [0]//  a[0][0]
        mov [f5], [f18]
        mov [f6], [f14]
        mult [f5], [f6]// i*n
        mov [f1], [f5]  
        mov [f2], [f18]  
        sum [f1],[f2]  // a[i][j]= i*n+j
        mov [f19],[f1] // a[i][j]-n grecinq f19 um
        mov [f12], [f19]
        mov [f13], 2
   	equal [f12],[f13]
   	jz .j // ete a[i][j] ==2 gnal j-i cikl@ sharunakelu
        mov [f12], [f19]
        mov [f13], 0
   	equal [f12],[f13]
        jz .j // ete a[i][j] ==0   gnal j-i cikl@ sharunakelu
        mov [f20][15]// row -n f20 registor berecinq
        mov [f20], [f17]// veragrenq row=i
.row        mov [f5], [f17]
        mov [f6], [f14]
        mult [f5], [f6]// row*n
        mov [f1], [f5]  
        mov [f2], [f18]  
        sum [f1],[f2]  // a[i][j]= row*n+j
        mov [f19],[f1] // a[i][j]-n grecinq f19 um
        mov [f12], [f19]
        mov [f13], 0
   	equal [f12],[f13]// a[row][j]!==0?
   	jz .j

 .col     mov[f21][16]
        mov [f21] [f18]// col=j
        mov [f5], [f17]
        mov [f6], [f14]
        mult [f5], [f6]// i*n
        mov [f1], [f5]  
        mov [f2], [f21] // 
        sum [f1],[f2]  // a[i][j]= i*n+column 
        mov [f19],[f1] // a[i][j]-n grecinq f19 um
        mov [f12], [f19]
        mov [f13], 0
   	equal [f12],[f13]// a[i][column]!==0?
   	jz .j
        mov [f5], [f20]
        mov [f6], [f14]
        mult [f5], [f6]// row*n
        mov [f1], [f5]  
        mov [f2], [f21] // column
        sum [f1],[f2]  // a[row][column]= row*n+column 
        mov [f19],[f1] 
        mov[f19],2 // a[row][column]=2
        mov [f2], [f25]
        sum [f1],[f2]  
        mov [f25],[f1]//result++
        mov [f1], 1  
        mov [f2], [f21]
        sum [f1],[f2] 
         
        mov [f21],[f1]// cloumn++
     
        jump .col
         mov [f1], 1  
        mov [f2], [f20]
        sum [f1],[f2]  
        mov [f20],[f1]// row++
        jump .row 
        mov [f1], 1  
        mov [f2], [f18]
        sum [f1],[f2]  
        mov [f18],[f1] // j++
        jump .j
        mov [f1], 1  
        mov [f2], [f17]
        sum [f1],[f2]  
        mov [f17],[f1]  // i++
        jump .i
  .result
        
        
        
   
    




for (i = 0; i < n; ++i) 
     for (j = 0; j < n; ++j) {
         if (a[i][j] != 2) {
                     
                      if (a[i][j] == 0) continue;
                      if (a[i][j] == 1) {                                 
                                  for (int row = i; a[row][j] != 0; ++row)   
                                      for (int col = j; a[i][col] != 0; ++col) { 
                                           a[row][col] = 2;
                                      } 
                      result++;    
                    }
         }
     }    
