#include <iostream>


int main()
{
	int n;
	int m;
	int tvanshan[10]={0,0,0,0,0,0,0,0,0,0};
	std::cout<< "N=";
	std::cin >> n;
	std::cout << "M=";
	std::cin >> m;
	int temp;
   for (int i = n; i <= m; ++i)
		{
		  temp = i;
		  while(temp != 0)
			{
				++tvanshan[temp%10];
				temp/=10;	
			}

		}
   for (int i = 0; i <= 9; ++i)
			{
			  	std::cout << i << "_" <<  tvanshan[i] << std::endl;		
			}

return 0;
}
