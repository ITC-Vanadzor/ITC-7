#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b,n;
  cout << "введите число n = ";
  cin >> n;
  while (n!=0)
  {
     a=n%10;
     n/=10;
     b=n%10;
     if (b>=a){
        cout << "FALSE" << endl;
        return 0;
        break;
     } 
  }
  cout << "TRUE" << endl;
  return 0;
}
