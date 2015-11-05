#include <iostream>
using namespace std;
 
int main()
{
    int b[5]={-7,8,82,75,-61};
    int * a[5];
    for (int i=0;i<5;++i)
      {
	a[i]=&b[i];
      }

    for (int i=0;i<5;++i)
      {
	cout << b[i] << ", ";
      }
    cout << endl;

    for (int i=0;i<5;++i)
      {
	cout << a[i] << ", ";
      }
    cout << endl;

    for (int i=0;i<5;++i)
      {
	for(int j=0;j<(5-i-1);++j)
	  {
	    if 	(*a[j+1]<*a[j])
	      {
		int * c = a[j+1];
		a[j+1]=a[j];
		a[j]=c;
	      }
	  }

      }
    for (int i=0;i<5;++i)
      {
	cout << *a[i] << ", ";
      }
    cout << endl;

    for (int i=0;i<5;++i)
      {
	for(int j=0;j<(5-i-1);++j)
	  {
	    if 	(a[j+1]<a[j])
	      {
		int * c = a[j+1];
		a[j+1]=a[j];
		a[j]=c;
	      }
	  }

      }
    for (int i=0;i<5;++i)
      {
	cout << a[i] << ", ";
      }
    cout << endl;

    return 0;
}
