//bazmapatik bajanarar
#include<iostream>

int baj(int  x, int  y)
{
	if (x>y)return baj(x - y, y);
	if (x<y) return baj(x, y - x);
	if (x == y)return x;
}

int bazm1(int  x, int  y, int xi)
{

	if (x%y == 0)return x;
	return bazm1(x + xi, y, xi);


}


int bazm(int x, int y)
{
	if (x>y)
		return bazm1(x, y, x);
	return bazm1(y, x, y);
}




int main()
{
	int y = 14;
	int x = 5;


	std::cout << bazm(x, y) << " " <<  baj(x, y);

	
	return 0;
}