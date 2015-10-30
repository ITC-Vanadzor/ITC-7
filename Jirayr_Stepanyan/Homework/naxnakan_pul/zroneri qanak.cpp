#include <iostream>
using namespace std;
int main()
{	
	cout << "enter any 3 numbers " << endl;
	int a, b, c, m, n = 0, k;
	cin >> a >> b >> c;      
	k = a + b + c;     //k-n tpac 3 tveri gumarn e
	while(k > 1)
	{
		m = k % 10;   
		if (!m)        
			n ++;  // ete m@ havasar e 0-i apa n@ avelacnel 1-ov
		k = k / 10;
	}
	cout << "zroneri qanak@ = " << n << endl;
	
	return 0;
}
