#include <iostream>
using namespace std;
int main()
{
	cout << "enter any number " << endl;
	int a, b, c, k = 0;
	cin >> a;
	c = a;             // c-in veragrum enq a-i arjeq@
	while (a > 1)
	{
	b = a % 10;
	if (b)             // ete b-n havasar che 0-i
	{
	if(!(c % b))       // ete c-n aranc mnacordi bajanvum e b-i uremn k-n avelacnel 1-ov
	k += 1;
	}
	a = a / 10;
	}
	
	cout << k;
		
	
	return 0;
}
