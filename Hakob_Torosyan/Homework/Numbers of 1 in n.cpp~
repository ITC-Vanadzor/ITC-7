#include <iostream>

int calculate (int);
int main()
{
	int n;
	std::cout << "Import n" << endl;
	std::cin >> n;
	std::cout << "The quantity of 1 in n is  " << calculate(n) << endl; 
	return 0;
}
int calculate(int a)
      {
int count = 0;
for(int i=0; i<=(sizeof(int)*8 - 1); ++i)
	{
	if(((1 << i) & a) != 0)
	++count;
	}
	return count;
      }
