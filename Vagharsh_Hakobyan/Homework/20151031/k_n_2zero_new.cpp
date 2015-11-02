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


int main()
{
  int k = InputNumber(1,'k'), n = InputNumber(1,'n');
  cout << k <<"-ական համակարգի " << n << "-անիշ թվերի քանակն է՝ " << (k-1)*pow(k,n-1) << endl;
  cout << "Երկու և ավելի անընդմեջ զրոներով թվերի քանակն է՝ " << (k-1)*pow(k,n-3)*(n-2) << endl;
  cout << "Առանց երկու անընդմեջ զրոների թվերի քանակն է՝ " << (k-1)*pow(k,n-1)-(k-1)*pow(k,n-3)*(n-2) << endl;
  return 0;
}
