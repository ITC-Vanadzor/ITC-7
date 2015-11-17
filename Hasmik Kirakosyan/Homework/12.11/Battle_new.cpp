#include <iostream>
#define n 5

int a[n][n];
int result = 0;

void check (int (&a)[5][5], int i, int j) {
          static int count;
          static int area;
          static int height, width;
          static int imax = i; 
          static int jmax = j;
          int top, buttom, left, right, buf_for_area, buf_for_count;
          static int imin; 
          static int jmin;

          
          if (a[i][j] == 1) {
              a[i][j] = 2;
    
   		      // check buttom, top, left, right  
   		      top     = (i <= 0)? 0:a[i-1][j];
   		      buttom  = (i >= 4)? 0:a[i+1][j];
   		      left    = (j <= 0)? 0:a[i][j-1];
   		      right   = (j >= 4)? 0:a[i][j+1];
  		       
              imax = (i >= imax)? i:imax;
              jmax = (j >= jmax)? j:jmax;
              
              count++;
              
              // change minimum coordinates if there is need
              if (count  == 1) { 
                               imin = i; 
                               jmin = j;  
                            }
              // count area
   		       width = (jmax - jmin)+1;
               height= (imax - imin)+1; 
               area  = width * height;
                                        
                
               if ((top  != 1)  && 
                  (buttom != 1) && 
                  (left   != 1) &&
                  (right  != 1)) {                               

                                    buf_for_area = area;
                                    buf_for_count = count; 
                                    count = 0;
                                    area  = 0;
                                    int buf_imax = imax;
                                    int buf_jmax = jmax;   
                                    imax  = 0;
                                    jmax  = 0;    
                                                            
                                    if (buf_for_count == buf_for_area) {
                                                      result++;                                                                                                         
                                                      return;
                                    }
                                    else std::cout<<"\nThere is flase ship in this area ["<<imin<<", "<<jmin<<"] - ["<<buf_imax<<", "<<buf_jmax<<"]"<<std::endl;

              } 
              else {                      
                      if ((j>=0) && (left == 1))     check(a, i, j-1);

                      if ((i>=0) && (top == 1))      check(a, i-1, j);

                      if ((i<=4) && (buttom == 1))   check(a, i+1, j); 

                      if ((j<=4) && (right == 1))    check(a, i, j+1); 
 
              }                                       
          }
}

int main () {
 
 int i, j;
 for (i = 0; i < n; ++i)  {
     for (j = 0; j < n; ++j) {
         
        std::cout<<" a["<<i<<"],["<<j<<"] = ";
        std::cin>>a[i][j];
     }
     std::cout<<"\n";
 }
     
 for (i = 0; i < n; ++i) 
     for (j = 0; j < n; ++j) {
         if (a[i][j] == 1) {
                     check (a, i, j);   
         }
     }    

 std::cout<<"\n\nNumber of ships is "<<result;
 char ch;
 std::cin>>ch;
 return 0;   
}
