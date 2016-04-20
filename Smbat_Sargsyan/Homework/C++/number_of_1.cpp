//trvac n tvi mekeri qanaky
#include <iostream>

using namespace std;
int main()
{
int n;
cout << "n= "; cin >> n;
int count=0;
while(n)
{
n=n & n-1;
++count;
}
cout << count << endl;
return 0;
}
