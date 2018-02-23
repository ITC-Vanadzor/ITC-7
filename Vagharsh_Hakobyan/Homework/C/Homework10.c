//Swap֊ի օրինակ

#include <iostream>
using namespace std;



int main()
{
  int n,i,k;
  cout << "ներմուծել int տիպի n  թիվը" << endl;
  cin >> n;
  cout << "ներմուծել int տիպի i թիվը" << endl;
  cin >> i;

  n=n^i;
  i=i^n;
  n=n^i;

  cout << "n-ի նոր արժեքը swap-ից հետո՝ " << n << endl;
  cout << "i-ի նոր արժեքը swap-ից հետո՝ " << i << endl;

  return 0;
}

