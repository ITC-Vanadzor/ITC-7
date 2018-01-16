#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n = 30;
  int m = 100;
  int sum = 0;
  for (int i=(n+1);i<m;++i){
    if ((i%3==0) && (i%10==2||i%10==4||i%10==8)){
        sum+=i;
    }
  }
  cout << "Sum of digits "  << sum << endl;
  return 0;
}
