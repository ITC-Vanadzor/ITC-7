#include <iostream>
int main()
{  
     int n;
     do  {
     std::cout << "n= ";
     std::cin >> n;
     } while(n<=0); 
     int array[n][n];
     int i=0,j=0;
     for(i=0;i <n;i++) 
       {
            for( j=0;j<n;j++)
               {
                     std::cout << "array[ " << i << "] [ " << j << "]=";
                     std::cin >> array[i][j];
                }
        }
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
               std::cout << array[i][j] << " ";
          } 
             std::cout << std::endl;
        }
     std::cout  << "***************" << std::endl;
         for(j=0;j<n;j++) {
              for(i=n-1;i>=0;i--) {
                    std::cout << array[i][j] << " ";
                    
         }
     std::cout << std::endl;
}

     return 0;
}
