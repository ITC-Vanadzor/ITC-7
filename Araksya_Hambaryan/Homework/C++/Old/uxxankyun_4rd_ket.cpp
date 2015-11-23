#include <iostream>
using namespace std;
// gtnel uxxankyan 4-rd keti koordinatnern @st myus 3 keteri koordinatneri

int main()
{
	int xA;
	std::cout<< "xA= ";
	std::cin >> xA;
	int yA;
	std::cout<< "yA= ";
	std::cin >> yA;
	int xB;
	std::cout<< "xB= ";
	std::cin >> xB;
	int yB;
	std::cout<< "yB= ";
	std::cin >> yB;
	int xC;
	std::cout<< "xC= ";
	std::cin >> xC;
	int yC;
	std::cout<< "yC= ";
	std::cin >> yC;
	// voroshenq uxix ankyun@ ev koordinatner@ poxenq aynpes vor  B. misht lini  uxix ankyun
	if ((xA-xB)*(xC-xA)+(yA-yB)*(yC-yA)==0) 
	{
		swap (xA, xB);
		swap (yA, yB);
	}
	else
	{
		if ((xC-xA)*(xC-xB)+(yC-yA)*(yC-yB)==0)
		{
			swap (xC, xB);
			swap (yC, yB);
		}
	}
	// ogtvenq ayn paymanic, vor uxxankyan akyunagcer@ hatman ketum kisvum en
	int xO=(xA+xC)/2;
	int yO=(yA+yC)/2;
	int xD=2*xO-xB;
	int yD=2*yO-yB;
	std::cout <<"4-rd keti koordinatnern en ("<< xD<<";"<<yD<<")"<< std::endl;
	return 0;
}



