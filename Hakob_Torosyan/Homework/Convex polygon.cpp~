#include <iostream>

int main()
{
int x1, y1, x2, y2, x3, y3, dif, number_of_tops;
std::cout << "Insert number of tops " << endl;
std::cin >> number_of_tops;
std::cout << "Insert coordinates of first top " << endl;
std::cin >> x1;
std::cin >> y1;
std::cout << "Insert coordinates of second top " << endl;
std::cin >> x2;
std::cin >> y2;
std::cout << "Insert coordinates of third top " << endl;
std::cin >> x3;
std::cin >> y3;
vector_product = (x2-x1) * (y3-y2) - (y2-y1) * (x3-x2);
int x, y;
//We must see two versions.First version, when vector_product>0 and second, when vector_product<0 
if (vector_product > 0)
{
 int temp = 1;
	while(temp <= (number_of_tops - 3))
		{
		std::cout << "Import coordinates of next top " << endl;
		std::cin >> x;
		std::cin >> y;
		if( ((x3-x2) * (y-y3) - (y3-y2) * (x-x3)) > 0 )
			{
			//vector_product = (x3-x2) * (y-y3) - (y3-y2) * (x-x3);
			x2 = x3;
			y2 = y3;
			x3 = x;
			y3 = y;
			}
			else
			{
	std::cout << "This is not convex polygon " << endl;
			break;		
			}
			temp++; 
		}
if(((x3-x2) * (y-y3) - (y3-y2) * (x-x3)) > 0){
	  if( ((x3-x2) * (y1-y3) - (y3-y2) * (x1-x3))>0 )
		{

		if( ((x1-x3) * (y2-y1) - (y1-y3) * (x2-x1)) > 0 )
				{
				std::cout << "This is convex polygon " << endl;
				}
			else 
				std::cout << "This is not convex polygon " << endl;
		}
	else
		{ std::cout << "This is not convex polygon " << endl;}	
						}
}
//Second variant, when vector_product<0 
else
{
int temp = 1;
while(temp <= (number_of_tops - 3))
		{
		std::cout << "Import coordinates of next top " << endl;
		std::cin >> x;
		std::cin >> y;
		if(((x3-x2) * (y-y3) - (y3-y2) * (x-x3)) < 0)
			{
			//vector_product = (x3-x2) * (y-y3) - (y3-y2) * (x-x3);
			x2 = x3;
			y2 = y3;
			x3 = x;
			y3 = y;
			}
		else
		 {
std::cout << "This is not convex polygon " << endl;
		break;		
		 } 
			temp++;
                 
		}
if( ((x3-x2) * (y-y3) - (y3-y2) * (x-x3)) < 0 ){
		
			 if( ((x3-x2) * (y1-y3) - (y3-y2) * (x1-x3))<0 )
		{

		if( ((x1-x3) * (y2-y1) - (y1-y3) * (x2-x1)) < 0 )
				{
				std::cout << "This is convex polygon " << endl;
				}
			else 
				std::cout << "This is not convex polygon " << endl;
		}
	else
		{ std::cout << "This is not convex polygon " << endl;}	
						}
}

 return 0;

}
