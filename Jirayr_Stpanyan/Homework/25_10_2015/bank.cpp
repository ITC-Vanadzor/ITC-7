#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double gumar, tokos, max_gumar;
	int amis = 0;
	cin >> gumar;
	cin >> tokos;
	cin >> max_gumar;
	tokos = tokos / 100;
	while(gumar >= max_gumar)
	{
		gumar = gumar + (gumar * tokos);
		amis ++;
	}
	cout << "amis = " << amis << endl;
	cout << "gumar = " << gumar << endl;

  return 0;
}
