//number of 2 zero's combination
#include <iostream>
#include <cmath>
using namespace std;


int InputNumber(int limit, char name)
{
  int n1 = limit;
  while (n1 <= limit){
    cout << "Ներմուծել " << limit << "֊ից մեծ " << name << " բնական թիվ՝ " << endl;
    cin >> n1; 
  }
  return n1;
}

void Zero(int *a, int b)
{
  for(int i = 0; i < b; ++i)
    {
      a[i] = 0;
    }  
}

int main()
{
  int k = InputNumber(1,'k'), n = InputNumber(1,'n');
  int *number;
  number = new int [n];
  int max_demical=pow(k,n);
  int counter=0;
  for (int i=0; i<max_demical;++i)
    {
        Zero(number,n);
	int c=i;
	int j=0;
	while (c>0)
	  {
	    number[j]=c%k;
	    j=j+1;
	    c=c/k;
	  }
	j=0;
	while (j<(n-1))
	  {
	    if (number[j]==0 && number[j+1]==0)
	      {
		counter=counter+1;
		j=n;
	      }
	    j=j+1;
	  }
    }
  cout << k <<"-ական համակարգի " << n << "-անիշ թվերի քանակն է՝ " << max_demical << endl;
  cout << "Երկու և ավելի անընդմեջ զրոներով թվերի քանակն է՝ " << counter << endl;
  cout << "Առանց երկու անընդմեջ զրոների թվերի քանակն է՝ " << max_demical-counter << endl;
  return 0;
}
