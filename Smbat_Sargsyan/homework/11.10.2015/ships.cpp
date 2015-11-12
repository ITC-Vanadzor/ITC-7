#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const int n=3;
int array[n][n];

int count;
//int iMin;
int iMax;
int jMin;
int jMax;

void function(int* array,int i,int j,int n)
{
  count++;
  array[i*n+j]==2;
  if(array[i*n+j+1]==1) { cout << 1; if(j>=jMax ) jMax=j+1;function(array,i,j+1,n);}
  if(array[i*n+j-1]==1) { cout << 2; if(j<=jMin ) jMin=j+1; function(array,i,j-1,n);}
  if(array[(i-1)*n+j]==1) {cout << 3; function(array,i-1,j,n);}
  if(array[(i+1)*n+j]==1) { cout << 4;if(i>=iMax) iMax=i+1;  function(array,i+1,j,n);} 

}

int main()
{
 for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
       cout << "a[ " << i << "] [ " << j << "]= ";
       cin >> array[i][j];
    }
  }
int ships=0;
int i=0;
int j=0;
while  (i < n) {
   while (j < n) {
      if (array [i][j] ==1) {
	 iMax=0; jMin=j; jMax=j;
   //cout << "xxxxxxxxxxx" << endl;
      	function (*array, i, j, n);
  //cout << "vvvvvvvvv" << endl;
if (count == (iMax - i+1)*(jMax - jMin+1) || count ==1)
				{
					++ships;
				}
       }
     ++j;
     }
    ++i;	
    j=0;
}
cout <<"ships = " << ships << endl;
return 0;
}
