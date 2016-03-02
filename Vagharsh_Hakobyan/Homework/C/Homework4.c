//Կետը եռանկյանը պատկանելու կամ չպատկանելու խնդիր
#include <cmath>
#include <iostream>
using namespace std;

float makeres(float x1, float y1, float x2, float y2, float x3, float y3){
  float result=0;
  result=abs((x3-x2)*(y2-y1)-(x2-x1)*(y3-y2))/2;
  return result;
}

int main()
{
  float a[4][2];
  float s[4];
  int i,
      j;
  for (i=0;i<4;i++){
    cout <<"Ներմուծել "<< i+1 << " կետի x կորդինատը" << endl;
    cin >> a[i][0];
    cout <<"Ներմուծել "<< i+1 << " կետի y կորդինատը" << endl;
    cin >> a[i][1];
  }

  s[0]=makeres(a[0][0],a[0][1],a[1][0],a[1][1],a[2][0],a[2][1]);
  s[1]=makeres(a[0][0],a[0][1],a[1][0],a[1][1],a[3][0],a[3][1]);
  s[2]=makeres(a[0][0],a[0][1],a[2][0],a[2][1],a[3][0],a[3][1]);
  s[3]=makeres(a[2][0],a[2][1],a[1][0],a[1][1],a[3][0],a[3][1]);

  if (s[0]==(s[1]+s[2]+s[3])){
       cout << "4-րդ կետը պատկանում է 1,2,3 կետերով կառուցված եռանկյանը" << endl;
  } else {
       cout << "4-րդ կետը չի պատկանում 1,2,3 կետերով կառուցված եռանկյանը" << endl;
  }

  return 0;
}
