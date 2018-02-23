#include <iostream>
#include <string>
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
	return gumar;
}
void VatBajanarar (int n) {
	int a[2]; // 2 bajanararneri hamematman hamar nermucvac zangvac
	a[2]=n;
	for (int i=2; i<=n/2; ++i) {
		if (n%i==0) 	{
			a[1]=i;
			if (tvanshan(a[1])>tvanshan(a[2])) {
				a[1]=0;
			}
			else {
				a[2]=a[1];
				a[1]=0;
			}
			if (tvanshan(a[1])==tvanshan(a[2])) {
				if (a[1]>a[2]) {
					a[2]=a[1];
					a[1]=0;
				}
				else {		
					a[1]=0;
				}
			}

		}
	}
	std::cout << a[2] << std::endl;
}

void LavBajanarar (int n) {
	int a[2]; // 2 bajanararneri hamematman hamar nermucvac zangvac
	a[2]=n;
	for (int i=2; i<=n/2; ++i) {
		if (n%i==0) 	{
			a[1]=i;
			if (tvanshan(a[1])<tvanshan(a[2])) {
				a[1]=0;
			}
			else {
				a[2]=a[1];
				a[1]=0;
			}
			if (tvanshan(a[1])==tvanshan(a[2])) {
				if (a[1]<a[2]) {
					a[2]=a[1];
					a[1]=0;
				}
				else {		
					a[1]=0;
				}
			}

		}
	}
	std::cout << a[2] << std::endl;
}

int main()
{
	int n;
	std::cout<<"n=";
	std::cin>>n;
std::string BajanarariTesak;
std::cout << "Vor tesaki Bajanararn eq cankanum voroshel, lav te vat " << '\t';
std::cin >> BajanarariTesak;
while ((BajanarariTesak!="vat") && (BajanarariTesak!="lav")) {
std::cout<<"Nman bajanarar goyutyun chuni, porceq krkin" << std::endl;
std::cout << "Vor tesaki Bajanararn eq cankanum voroshel, lav te vat " << '\t';
std::cin >> BajanarariTesak;
}
if (BajanarariTesak=="vat") {
	VatBajanarar (n);
}
if (BajanarariTesak=="lav") {
	LavBajanarar (n);
}
	return 0;
}
