#include <iostream>
int Bajanarar(int m,int n)
{
if(n==0) return n;
if(m==0) return m;
if(n==m) return m;
if(n==1 || m==1) return 1;
if(m%2==0 && n%2==0) return 2*Bajanarar(m/2,n/2);
if(m%2==0 && n%2!=0) return Bajanarar(m/2,n);
if(m%2!=0 && n%2==0) return Bajanarar(m,n/2);
if(m%2!=0 && n%2!=0 && n>m) return Bajanarar((n-m)/2,m);
if(m%2!=0 && n%2!=0 && n<m) return Bajanarar((m-n)/2,n);
}

int main()
{
 int m,n;
 do {
     std::cout << "m=";
     std::cin >> m;
     std::cout << "n=";
     std::cin >> n;
    } while(n<0 || m<0);

 std::cout << "Bajanarar= " << Bajanarar(m,n) << std::endl;

 return 0;
}
