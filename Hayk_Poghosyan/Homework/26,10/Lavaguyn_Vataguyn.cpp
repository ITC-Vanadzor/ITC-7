//lavaguyn ev vataguyn bajanararner
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

void vat()
{
	int n, i, res;
	std::cout << "nermucq n-@";
	std::cin >> n;
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
std::cout << res;

}

void lav()
{
	int n, i, res;
	std::cout << "nermucq n-@";
	std::cin >> n;
	int sum = 0;
	for (i = 1; i <= (int)sqrt((double)n); i++)
		if (n%i == 0)
		{
			int t = ssum(i);
			if (t>sum || (t == sum && i<res))
			{
				res = i; sum = t;
			}
			t = ssum(n / i);
			if (t>sum || (t == sum && n / i<res))
			{
				res = n / i; sum = t;
			}
		}
	std::cout << res;

}

int main() {

	
	int vat_lav;
	std::cout << "ete uzum eq hashvel vataguyn@ sexmeq 1 hakarak depqum 0";
	std::cin >> vat_lav;
	if (vat_lav==0)lav(); else vat();
	return 0;
}