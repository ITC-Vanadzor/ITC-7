#include <iostream>
#define n 5

int a[n][n];
int result = 0;

void check (int (&a)[5][5], int i, int j) {
          static int count = 0;
          static int area;
          static int height, width;
          int imax = i; 
          int jmax = j;
          int imin = i; // Problem with minimum coordinates
          int jmin = j;
          if (a[i][j] == 1) {
              a[i][j] = 2;
              count++; 
              //std::cout<<"\ncount = "<<count;
              //std::cout<<" area = "<<area;
   		      
   		      int top     = (i == 0)? 0:a[i+1][j];
   		      int buttom  = (i == 4)? 0:a[i-1][j];
   		      int left    = (j == 0)? 0:a[i][j-1];
   		      int right   = (j == 4)? 0:a[i][j+1];
  		       
              imax = (i > imax)? i:imax;
              jmax = (j > jmax)? j:jmax;
              
              
               /*std::cout<<" jmax =  "<<jmax; 
   		       std::cout<<" imax =  "<<imax;
               std::cout<<" jmin =  "<<jmin; 
   		       std::cout<<" imin =  "<<imin;
               */ 
     
   		       width = (jmax - jmin)+1;
               height= (imax - imin)+1; 
               area = width*height;  
              if ((top   != 1) && 
                 (buttom != 1) && 
                 (left   != 1) &&
                 (right  != 1)) {                               
                                std::cout<<" area = "<<area;                            
                                if (area == count) {
                                      result++;
                                      count = 0;
                                      area = 0;                                   
                                      return;
                                }
              } 
              else {                      
                      if (i>0 && a[i][j-1] == 1) {  check(a, i, j-1);  }
                      if (i>0 && a[i-1][j] == 1) {  check(a, i-1, j); }
                      if (i<4 && a[i+1][j] == 1) {  check(a, i+1, j); }
                      if (j<4 && a[i][j+1] == 1) {  check(a, i, j+1); }
              }                                       
          }
}

int main () {
 //std::cout<<"\n Input n : ";
 // std::cin>>n;
 
 int i, j;
 for (i = 0; i < n; ++i)  {
     for (j = 0; j < n; ++j) {
         a[i][j]=1;
        std::cout<<" a["<<i<<"],["<<j<<"] = ";
        std::cin>>a[i][j];
     }
     std::cout<<"\n";
 }
     
 for (i = 0; i < n; ++i) 
     for (j = 0; j < n; ++j) {
         if (a[i][j] != 2 && a[i][j] != 0) {
                     check (a, i, j);   
         }
     }    

 std::cout<<"\n\nNumber of ships is "<<result;
 char ch;
 std::cin>>ch;
 return 0;   
}
