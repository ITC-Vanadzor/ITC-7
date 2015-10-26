//Հաշվում է int֊ի տիպի n թվի մեջ մեկերի քանակը

#include <iostream>
using namespace std;



int main()
{
  int n,i;
  int m=0;
  cout << "ներմուծել int տիպի " << n << " թիվը" << endl;
  cin >> n;
  for (i=0;i<(sizeof(n)*8);i++){
    if(n&(1<<i)){
      m=m+1;
    }
  }
  cout << "int տիպի " << n << " թվի երկուական տեսքի մեջ կա " << m << " հատ մեկ" << endl;

  return 0;
}

