#include  <iostream>
int ast(int n, int m) {
return (m==1) ? n : ast(n, m-1)*n;
}
int main () {
int n;
std::cout << "n= ";
std::cin >> n;
int m;
std::cout << "m= ";
std::cin >> m;
std::cout << ast(n,m) << std::endl;
return 0;
}


