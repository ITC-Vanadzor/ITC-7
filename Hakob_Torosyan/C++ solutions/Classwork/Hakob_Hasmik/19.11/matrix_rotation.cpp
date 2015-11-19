#include <iostream>

int main() {
  int n,m;
  std::cout<<" n = ";
  std::cin>>n;

  std::cout<<" m = ";
  std::cin>>m;

  int a[n][m];
 

  for (int i = 0; i<n; i++)
    for (int j = 0; j < m; j++) {
      std::cin>>a[i][j];
    }
std::cout<<"\n\n";

 for (int j = 0; j < m; j++) {
  for (int i = n-1; i>=0; i--) {
    std::cout<<a[i][j] << " "; 
  }
  std::cout<<std::endl;
 }

return 0;
}
