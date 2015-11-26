#include <iostream>
#include <stdint.h>
#include <conio.h>
#include <math.h>

int superpow_mod_m (const int& n,const int& m) {  
   if (n==0) return 16;
    else
	   return (2*(superpow_mod_m(n-1, m)))%m;
}

int main () {
 int n=0, m=0;

do {
 std::cout<<"\n n is in [0, 100000] | n = ";
 std::cin>>n;
} while (n>100000 || n<0);

do {
 std::cout<<"\n n is in [2, 10000] | m = ";
 std::cin>>m;
} while (m<2 || m>10000);
 
 int pos_1=1;
 while (n+1>pos_1) {
       pos_1=pos_1<<1;
 }

std::cout<<"\n" <<superpow_mod_m(pos_1, m);

getch();
return 0;
}
