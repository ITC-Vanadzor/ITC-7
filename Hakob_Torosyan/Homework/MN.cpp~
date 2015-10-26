#include <iostream>

int main()
{
int n, m;
int number[10]={};//massive which contain 10 variables which equally to 0 
std::cout<< "Please import n ";
std::cin >> n;
std::cout << "Please import m ";
std::cin >> m;
int temp;//temporary value
for(int i = n; i <= m; ++i)
	{
	 temp = i;
	while(temp > 0)
		{
		++number[temp%10];
		temp=temp/10;		
		}

	}
for(int j = 0; j <= 9; ++j)
		{
		std::cout << j << "->" <<  number[j] << " ";		
		}
std::cout << endl;
return 0;
}
