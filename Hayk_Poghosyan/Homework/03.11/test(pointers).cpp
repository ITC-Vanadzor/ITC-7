#include<iostream>

void test(int &x)
{
	++x;
}

void test1(int x)
{
	++x;
}

void test2(int *x)
{
	//++x;//chi kareli
	++*x;
	++x;
}

void test3(int *&x) //(int &*x) sxal e
{
	++*x;
	++x;
	//++*x; chi kareli
}


int main()
{
	int x = 5;
	int* px = &x;

	std::cout <<"px= "<< px ;
	std::cout <<"\n*px= " << *px;
	std::cout << "\n&x= " << &x;

	test(x);
	std::cout << "\n"<<x;

	test1(x);
	std::cout << "\n" << x;

	test2(&x);
	std::cout << "\n" << x;
	std::cout << "\n" << px;

	test3(px);
	std::cout << "\n" << x;
	std::cout << "\n" << px;

	int**ppx = & px;
	std::cout << "\n" << ppx;

	int *pointer = new int ; 
	std::cout << "\n\n" << pointer;
	++pointer;
	*pointer = 10;
	std::cout << "\n\n" << pointer;
	delete *pointer;

	std::cout << "\n";
	system("Pause");
	return 0;
}