#include <iostream>
int reverse2(int x,int y)
{
	if(x==0)return y;
	y*=10;
	y=y+(x%10);
	x/=10;
	reverse2(x,y);
}

int reverse(int x)
{
	return reverse2(x,0);
}
int main()
{
	int x=0;
	while(x <= 0)
	{
		std::cout << "tpel voreve drakan amboxj tiv ";
		std::cin >> x;
	}
	std::cout<<reverse(x);

   return 0;
}
