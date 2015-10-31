#include <iostream>
#include <math.h>
void exponent (int n) {
int exp=1;
while (n>pow(2,exp)) {
exp++;
}
std::cout<<pow(2,exp);

}

int main () {
int n;
std::cout<<"n =";
std::cin>>n;

exponent(n);

return 0;
}
