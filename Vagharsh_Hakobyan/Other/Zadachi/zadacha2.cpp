#include <iostream>
#include <cmath>
using namespace std;

int main(){
  setlocale(LC_ALL,"rus");
  int  stepen= 1;
  int znachenie = 0;
  int n;
  cout << "введите число n = ";
  cin >> n;
  while (stepen<n)
  {
     znachenie++;
     stepen*=2; 
  }
  if (stepen==n)
  {
    cout << "число " << n << " является " << znachenie << " степенью числа 2";  
  } else {
    cout << "число " << n << " не является степенью числа 2"; 
  }
  cout << endl;
  return 0;
}
