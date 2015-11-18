#include <iostream>
#include <cmath>
int Yndhanur_tveri_qanak(int n,int k)
 {
    return (k-1)*pow(k,n-1);
 }
int Zroyov_tveri_qanak(int n,int k)
 {
    return (n-2)*pow(k,n-2)-1;
 }
int main()
{
int k,n;
std::cout << "k = ";
std::cin >> k;
std::cout << "n = ";
std::cin >> n;
int Erku_zro_chparunakox=Yndhanur_tveri_qanak(n,k)-Zroyov_tveri_qanak(n,k);
std::cout << Erku_zro_chparunakox << std::endl;
return 0;
}
