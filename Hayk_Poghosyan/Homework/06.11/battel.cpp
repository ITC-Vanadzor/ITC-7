//navakner
#include<iostream>
#define n 3
bool arr[n][n];
int cheak( int i, int j,  bool &aj,bool &nerqev)
{
	int count = 0;
	if (arr[i + 1][j]) { ++count; aj = true; }
	if (arr[i][j - 1]) { ++count; nerqev = true; }
	return count;
}


int main()
{

	for (int i = 0; i<n; ++i)
		for (int j = 0; j<n; ++j)
			std::cin >> arr[i][j];
	int tmp = 0;
	int count = 0;
	bool aj=false,  nerqev=false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			nerqev = false;
			if (arr[i][j])
			{
				if (i == n-1 && j == n-1) {  ++count; continue; }
				if (nerqev = false && i == n - 1) { ++count; continue; }
				tmp = cheak(i, j, aj, nerqev);
				if (tmp == 0) { ++count; }

			}
		}
	}
	
	std::cout << count;
	return 0;
}
