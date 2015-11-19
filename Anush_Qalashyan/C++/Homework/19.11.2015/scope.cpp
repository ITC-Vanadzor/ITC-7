#include <iostream>
#include <cstdlib>


int main()
{
	int n = 0;
	do
	{
		std::cout << "n = ";
		std::cin >> n;
	}
	while(n < 0);

	char arr[250];
	for(int i = 0; i < n; ++i)
	{
		std::cout << "arr[" << i + 1 << "]";
		std::cin >> arr[i];
	} 
	std::cout << std::endl;

	int a=false;
	int b=false;
	int c=false;

	for(int i=0; i < n; ++i)
	{
		if(arr[i]=='{')
		{
			++a;
		}
		else if(arr[i]=='}')
		{
			++a;
		}
              else if(arr[i]== '(')
		{
			++b;			
		}
		else if(arr[i]== ')')
		{
			++b;			
		}
		else if(arr[i]=='[')
		{
			++c;
		}
		else if(arr[i]==']')
		{
			++c;
		}
		
	}

	if( a%2==0 && b%2==0 && c%2==0 )
	{
		std::cout << "Ճիշտ է" << std::endl;
		exit(1);
	}

	std::cout<< "Սխալ է" << std::endl;
	return 0;
}
