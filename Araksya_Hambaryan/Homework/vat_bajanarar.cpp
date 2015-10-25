#include <iostream>
// vat bajanarari voroshum` baci 1ic, isk erku tveric vat hamarvum er na voi tvanshanneri gumarn amenapoqrn er, isk tvanshanneri havasar gumari depqum vat khamarvi aveli metc tiv@


int tvanshan(int n) // tvanshanneri gumari hashvum
{
	int ncopy;
	ncopy=n;
	int gumar;
	gumar=0;
	do
	{
		gumar+=ncopy%10;
		ncopy/=10;
	}
	while (ncopy>0);
	gumar+=ncopy;
	return gumar;
}

int main()
{
	int n;
	std::cout<<"n=";
	std::cin>>n;
	int a[2]; // 2 bajanararneri hamematman hamar nermucvac zangvac
	a[2]=n;
	for (int i=2; i<=n/2; ++i)
	{
		if (n%i==0)
		{
			a[1]=i;
			if (tvanshan(a[1])>tvanshan(a[2]))
			{
				a[1]=0;
			}
			else
			{
				a[2]=a[1];
				a[1]=0;
			}
			if (tvanshan(a[1])==tvanshan(a[2]))
			{
				if (a[1]>a[2])
				{
					a[2]=a[1];
					a[1]=0;
				}
				else
				{		
					a[1]=0;
				}
			}

		}
	}
	std::cout << a[2] << std::endl;
	return 0;
}
