#include <iostream>


struct Sum 
{
	int a;
	int b;
	int d;
	Sum(int r=0, int i=0, int p=0)
	{
		a = r;
		b = i;
		d = p;
	}

	void out(void){}

};
Sum operator + (const Sum &c1, const Sum &c2)
{
	Sum tmp;
	tmp.a=c1.a+c2.a ;
	tmp.b=c1.b+c2.b ;
	tmp.d=c1.b+c2.d ;

	std::cout << tmp.a <<std::endl;
	return(tmp);
}
int main()
{
	Sum A(5);
	Sum B(3);
	Sum D(1);	 
	Sum c;
	c = A + B + D;
	c.out();

	return 0;
}
