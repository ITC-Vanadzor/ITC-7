//example
#include <iostream>

/* int check (int** a, int i, int j) {
    if (a[i][j] == 0) return 0;
    if (a[i][j] == 1) {
                      for (int col = j; a[i][col] != 0; ++col) 
                          {
                               a[i][col] = 2;
                          }
                      for (int row = i; a[row][j] != 0; ++row) 
                          {
                               a[row][j] = 2;
                          } 
                         return 1;    
                    }
}
*/


int main () {
 int n; 
 std::cout<<"\n Input n : ";
 std::cin>>n;
 
 int a[n][n];
 int result = 0;
 
 int i, j;
 for (i = 0; i < n; ++i)  {// Input 
     for (j = 0; j < n; ++j) {
         std::cout<<" a["<<i<<"],["<<j<<"] = ";
         std::cin>>a[i][j];
     }
     std::cout<<"\n";
 }
     
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

 std::cout<<"\n\nNumber of ships is "<<result;
 char ch;
 std::cin>>ch;
 return 0;   
}
