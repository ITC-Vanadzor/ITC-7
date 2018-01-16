#include <iostream>
#include <cmath>
using namespace std;

int main(){
  for (int i=100;i<1000;++i){
    if ((i*i)%1000==i){
        cout << i << endl;
    }
  }
  cout << endl;
  return 0;
}
