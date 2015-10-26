#include <iostream>
using namespace std;



unsigned e(int n){
  int i, k=1;
  for (i=1;i<=n*8-1;i++){
    k=k*2;
  }
  return k;

}




int main()
{
  int n1; unsigned int n2; short int n3; unsigned short int n4;
  n1=sizeof(n1);
  n2=sizeof(n2);
  n3=sizeof(n3);
  n4=sizeof(n4);
  cout << "int-ի սահմաններն են՝ -" << e(n1) <<"-ից " << e(n1)-1 << endl;
  cout << "unsigned int-ի սահմաններն են՝ 0" <<"-ից " << 2*e(n2)-1 << endl;
  cout << "short int-ի սահմաններն են՝ -" << e(n3) <<"-ից " << e(n3)-1 << endl;
  cout << "unsigned short int-ի սահմաններն են՝ 0" <<"-ից " << 2*e(n4)-1 << endl;
  return 0;
}
