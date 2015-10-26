//Բազմանկյան ուռուցիկության որոշում
#include <cmath>
#include <iostream>
using namespace std;

float vektorakan_artadryal(float x1, float y1, float x2, float y2, float x3, float y3){
  return (x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
}

int main()
{
  cout <<"Ներմուծել  բազմանկյան գագաթների քանակը (3֊ից մեծ)" << endl;
  int n=0;
  cin >> n;
  while (n<4){
  	cout <<"Ներմուծված n=" << n << " փոքր կամ հավասար է 3֊ի, կրկին ներմուծեք n-ը" << endl;
	cin >> n;
  }
  float a[n][2];
  float s[n];
  int i;
  for (i=0;i<n;i++){
    cout <<"Ներմուծել "<< i+1 << " կետի x կորդինատը" << endl;
    cin >> a[i][0];
    cout <<"Ներմուծել "<< i+1 << " կետի y կորդինատը" << endl;
    cin >> a[i][1];
    if (i>=2){
	s[i-2]=vektorakan_artadryal(a[i-2][0],a[i-2][1],a[i-1][0],a[i-1][1],a[i][0],a[i][1]);
    }
  }
  i=n-1;
  s[i-1]=vektorakan_artadryal(a[i-1][0],a[i-1][1],a[i][0],a[i][1],a[0][0],a[0][1]);
  s[i]=vektorakan_artadryal(a[i][0],a[i][1],a[0][0],a[0][1],a[1][0],a[1][1]);

  bool payman=false;
  if (s[0]>=0){
	payman=true;
	for (i=1;i<n;i++){
		if (s[i]<0){
			payman=false;
		}
	}
  } else {
	payman=true;
	for (i=1;i<n;i++){
		if (s[i]>=0){
			payman=false;
		}
	}
  }

  if (payman) {
	cout << "բազմանկյունը ուռուցիկ է" << endl;
  } else {
	cout << "բազմանկյունը ուռուցիկ չէ" << endl;
  }

  return 0;
}
