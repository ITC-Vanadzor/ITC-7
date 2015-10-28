//count of using digits
//Թվի մեջ օգտագործված թվանշանների քանակը
#include<iostream>
using namespace std;

int InputNumber(int limit, char name){
  int n = limit;
  while (n <= limit){
    cout << "Ներմուծել " << limit << "֊ից մեծ " << name << " բնական թիվ՝ " << endl;
    cin >> n; 
  }
  return n;
}

int LenOfDigit(int digit){
  int n = 0;
  while (digit > 0){
    n += 1;
    digit /= 10;
  }
  return n;
}

int NumberInPositionLeft(int digit, int position){
  int n = 0;
  int k = 1;
  while (n < position){
    n += 1;
    k *= 10;
  }
  digit /= k;
  return digit;
}

int NumberInPosition(int digit, int position){
  int n = 0;
  int k = 1;
  while (n < position){
    n += 1;
    k *= 10;
  }
  digit = digit - (digit/ k) * k ;
  n = 0;
  k = 1;
  while (n < (position-1)){
    n += 1;
    k *= 10;
  }
  return digit/k;
}

int NumberInPositionRight(int digit, int position){
  int n = 0;
  int k = 1;
  while (n < position){
    n += 1;
    k *= 10;
  }
  digit = digit - NumberInPositionLeft(digit,position)*k-NumberInPosition(digit,position)*(k/10);
  return digit;
}

int CountOfDigits(int digit, int number){
  int n = 0;
  int count = 0;
  if (number==0){
    for (int i=1;i<LenOfDigit(digit);++i)
  }

  return count;
}




int main(){
  int n = InputNumber(0,'n');
  int m = InputNumber(n,'m');
  int n1 = NumberInPosition(n,4);
  for (int i=1;i<=LenOfDigit(n);++i){
    cout << "num "  << n << endl;
    cout << "pozicia "  << i << endl;
    cout << "num poz "  << NumberInPosition(n,i) << endl;
    cout << "num left "  << NumberInPositionLeft(n,i) << endl;
    cout << "num right "  << NumberInPositionRight(n,i) << endl;
  }
  return 0;
}
