#include <stdio.h>
#include <math.h>
#include <iostream>
int ssum(int a)
{
	int t = 0;
	while (a)
	{
		t += a % 10;
		a /= 10;
	}
	return t;
}

int main() {
	
	int n, i, res;

std::	cin >> n;
int sum = n;
	for (i = 2; i <= (int)sqrt((double)n); i++)
		if (n%i == 0)
		{
			int t = ssum(i);
			if (t<sum || (t == sum && i>res))
			{
				res = i; sum = t;
			}
			t = ssum(n / i);
			if (t<sum || (t == sum && n / i>res))
			{
				res = n / i; sum = t;
			}
		}
	printf("%d", res);
	
	system("Pause");
	return 0;
}