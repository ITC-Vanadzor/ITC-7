#include <iostream>

int main () {

int a;
std::cout<<"a= ";
std::cin>>a;

int b;
std::cout<<"b= ";
std::cin>>b;

std::cout<<"\nmov "<<a<<" "<<&a;
std::cout<<"\nmov "<<b<<" "<<&b;

int x=0;
std::cout<<"\nmov "<<x<<" "<<&x;

std::cout<<"\ncompare "<<&a<<", "<<&b;
if (a!=b) {
	std::cout<<"\nload "<<&b;
	std::cout<<"\nadd "<<&a;
	std::cout<<"\nstore "<<&x<<"\n";
}
else 	{
	std::cout<<"\njumpTo ";
	std::cout<<"\nimull "<<&a<<", "<<&b;
	std::cout<<"\nstore "<<&x<<"\n";
	}

return 0;
}
