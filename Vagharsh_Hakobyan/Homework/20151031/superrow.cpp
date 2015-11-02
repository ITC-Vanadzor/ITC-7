//mod of superrow
#include <iostream>
#include <cmath>
using namespace std;


int InputNumber(int limit, char name)
{
  int n1 = limit-1;
  while (n1 <= limit){
    cout << "Ներմուծել " << limit << "֊ից մեծ կամ հավասար" << name << " բնական թիվ՝ " << endl;
    cin >> n1; 
  }
  return n1;
}


int main()
{
  int n = InputNumber(0,'n'), m = InputNumber(2,'m');
  unsigned long long k=0;
  if (n>=64)
    {
      cout << "Ձեր համակարգիչը չի կարող հաշվարկել 2֊ի " << n << " աստիճանը" << endl;
      cout << "Ձեր համակարգիչը կհաշվարկել 2֊ի 64 աստիճանը" << endl;
      k = k-1;
    }
  else 
    {
      k = pow (2,n);
    }
  int j = 1;
  for (unsigned long long i=1; i<=k;++i)
    {
      j = j * 2;
      j = j % m;
    }
  cout << "Superrow =  " << j << endl;
  return 0;
}
