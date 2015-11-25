#include <iostream>

int MyPrint(char name) {
    int number;
    std::cout << "Number " << name << " = ";
    std::cin >> number;
    return number;
}

struct test {
    int a;
    test();
    test(int x);
    const test& operator = (const test &f)
    {
	if (this != &f) {
	    a=f.a;
	}
	return (*this);
    }
    const test& operator + (const test &f)
    {
	test TMP;
	TMP.a = a+f.a;
	return TMP;
    }
    ~test();
};

test::test()
    : a(0)
    {}

test::test(int x)
    : a(x)
    {}

test::~test()
    {}


int main () {
    int num1 = MyPrint('1');
    int num2 = MyPrint('2');
    std::cout << num1 << " + " << num2 << " = " << num1+num2<<std::endl;
    test A(num1);
    test B(num2);
    test C= A+B;
    std::cout << "Struct   " << C.a << " = " << A.a << " + " << B.a << std::endl;
    return 0;
}

