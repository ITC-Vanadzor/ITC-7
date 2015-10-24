#include<iostream>
using namespace std;

void planB(int n,int m)
{
	int tver[10] = { 0,0,0,0,0,0,0,0,0,0 };
	
	for (n; n < m; n++)
	{
		int tmp = n;
		while (tmp > 0)
		{
			tver[tmp % 10] ++;
			tmp /= 10;
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		cout << tver[i] << " ";
	}
	cout << endl;
}





int main()
{
	int m, n;
	cin >> n >> m;
	planB(n,m);
	
	
	int a = n;
	int tver[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int taser = (m-a) / 10;
	while (a > 0)
		{
			tver[a % 10]++;
			a /= 10;
		}
	while (taser > 0)
	{
		for (int i = 0; i < 9; i++)
		{
			tver[i] += taser;
		}
		taser /= 10;
	}
	
	for (int i = 0; i < 9; ++i)
	{
		cout << tver[i] << " ";
	}
	
	system("Pause");
	return 0;
}