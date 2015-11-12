#include <iostream>
#define n 5

int a[n][n];
int result = 0;

void check (int (&a)[5][5], int i, int j) {
          static int count;
          static int imin = i, imax = i, jmin = j, jmax = j;
          if (a[i][j] == 0 || a[i][j] == 2) return;
          if (a[i][j] == 1) {
              count++;
              a[i][j] = 2;
 		      imin = (i < imin)? i:imin;
 		      jmin = (j < jmin)? j:jmin;
   		      imax = (i > imax)? i:imax;
   		      jmax = (j > jmax)? j:jmax;
   		      
   		      int top     = (i > 0)? a[i+1][j]: 0;
   		      int buttom  = (i < 4)? a[i-1][j]: 0;
   		      int left    = (j > 0)? a[i][j-1]: 0;
   		      int right   = (j < 4)? a[i][j+1]: 0;
   		      
              if ((top   != 1) && // I think, problem is from here
                 (buttom != 1) && 
                 (left   != 1) &&
                 (right  != 1)) { // to here
                             static int area;
                             if (imax == imin) {
                                if (jmax == imin) area = 1;
                                   else area = jmax-jmin+1;
                                }
                             else if (jmax == jmin) area = imax-imin+1;
                                   else area = (imax-imin+1)*(jmax-jmin+1);
                             
                             std::cout<<"area = "<<area<<" count= "<<count<<std::endl; 
                             if (area == count) {
                                      result++;
                                      count = 0;
                                      area = 0;
                                      return;
                             }
                 } 
              else {                       
                      if (j > 0) check(a, i, j-1);
                      if (i > 0) check(a, i-1, j);
                      if (i < 4) check(a, i+1, j);
                      if (j < 4) check(a, i, j+1);
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
         if (a[i][j] != 2) {
                     check (a, i, j);   
         }
     }    

 std::cout<<"\n\nNumber of ships is "<<result;
 char ch;
 std::cin>>ch;
 return 0;   
}
