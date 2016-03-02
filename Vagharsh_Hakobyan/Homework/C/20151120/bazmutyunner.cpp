#include <iostream>

 int main()
{
	int n=-1;
	do
	{
		std::cout << "Input (n>0) n = ";
		std::cin >> n;
	}
	while(n<1);
		
	int m=-1;
	do
	{
		std::cout << "Input (m>0 and m<=(n-1)*n) m = ";
		std::cin >> m;
	}
	while(m<1 || m>(n-1)*n);
		
  	int** arr = new int *[m];
  	for (int i =0; i<m; i ++)
  	{
        arr[i] = new int [2];
	}
	for (int i=0;i<m;++i)
	{
		do
		{
			std::cout << "Input arr[" << i <<"],[0] = ";
			std::cin >> arr[i][0];
		}
		while (arr[i][0]<1 || arr[i][0]>=n);

		do
		{
			std::cout << "Input arr[" << i <<"],[1] = ";
			std::cin >> arr[i][1];
		}
		while (arr[i][1]<=arr[i][0] || arr[i][1]>n);
		
	}
	
			
	delete arr;
	return 0;
}
