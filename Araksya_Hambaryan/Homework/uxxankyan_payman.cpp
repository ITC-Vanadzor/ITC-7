#include <iostream>
// hnaravor e ardyoq trvac 4 ketov stanal uxxankyun

int skalyar (int x4, int y4, int x1, int y1, int x2, int y2) //2 vektorneri skalyar artadryal
	{
	  return (x1-x4)*(y1-y4)+(x2-x4)*(y2-y4);
	}

int main()
       {
	int x1;
	std::cout << "x1= ";
	std::cin >> x1;
	int y1;
	std::cout << "y1= ";
	std::cin >> y1;
	int x2;
	std::cout << "x2= ";
	std::cin >> x2;
	int y2;
	std::cout << "y2= ";
	std::cin >> y2;
	int x3;
	std::cout << "x3= ";
	std::cin >> x3;
	int y3;
	std::cout << "y3= ";
	std::cin >> y3;
	int x4;
	std::cout << "x4= ";
	std::cin >> x4;
	int y4;
	std::cout << "y4= ";
	std::cin >> y4;
	
	int uxix_ankyun=0; //voroshenq uxix ankyunneri qanak@ skalyar atdaryali mijocov
	if (skalyar(x4, y4, x1, y1, x2, y2)==0 || skalyar(x4, y4, x2, y2, x3, y3)==0 || skalyar(x4, y4, x1, y1, x3, y3)==0) 
	{
		uxix_ankyun ++;
	}
	if (skalyar(x1, y1, x2, y2, x4, y4)==0 || skalyar(x1, y1, x3, y3, x4, y4)==0 || skalyar(x4, y4, x2, y2, x3, y3)==0) 
	{
		 uxix_ankyun ++;
	}
	if (skalyar(x2, y2, x1, y1, x4, y4)==0 || skalyar(x2, y2, x4, y4, x3, y3)==0 || skalyar(x2, y2, x1, y1, x3, y3)==0) 
	{ 
		uxix_ankyun ++;
	}
	if (uxix_ankyun==3)
	{ 
		std::cout << "hnaravor e" << std::endl;
	}
	else
	{
		std::cout << "hnaravor che" << std::endl;
	}
	return 0;
}



