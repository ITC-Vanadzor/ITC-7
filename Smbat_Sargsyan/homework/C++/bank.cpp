#include <iostream>

using namespace std;

int main()
{
static int amis;
int gumar,tokos,verjnakan;
cout << "gumar= " ;cin >> gumar;
cout << "tokos= " ;cin >> tokos;
cout << "verjnakan= ";cin >> verjnakan;
while(gumar < verjnakan)
{
amis++;
gumar=gumar+(gumar*tokos/100);
}
cout << gumar << endl;
cout << amis << endl; 

return 0;
}
