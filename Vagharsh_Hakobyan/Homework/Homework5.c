//Քառանկյան չորրորդ կետը գտնելու խնդիր
#include <cmath>
#include <iostream>
using namespace std;


void swap_row(float **arr,int size);


float uxxahayac(float x1, float y1, float x2, float y2, float x3, float y3){
  return (x2-x1)*(x3-x1)+(y2-y1)*(y3-y1);
}



int main()
{
  float **a;
  a = new float *[2];
  for (int i =0; i<4; i ++)
        a[i] = new float [4];
  float s[4];
  int i,
      j;
  for (i=0;i<3;i++){
    cout <<"Ներմուծել "<< i+1 << " կետի x կորդինատը" << endl;
    cin >> a[i][0];
    cout <<"Ներմուծել "<< i+1 << " կետի y կորդինատը" << endl;
    cin >> a[i][1];
  }

  float uxx=uxxahayac(a[0][0],a[0][1],a[1][0],a[1][1],a[2][0],a[2][1]);
  int k=0;
  while ((uxx!=0) && (k<3)){
    swap_row(a,3);
    uxx=uxxahayac(a[0][0],a[0][1],a[1][0],a[1][1],a[2][0],a[2][1]);
    k=k+1;
  }

  if (uxx==0){

    a[3][0]=a[2][0]+a[1][0]-a[0][0];
    a[3][1]=a[2][1]+a[1][1]-a[0][1];

    cout << 4 << " կետի x կորդինատը " << a[3][0] << endl;
    cout << 4 << " կետի y կորդինատը " << a[3][1] << endl;
  } else {
    cout << "Ներմուծված 3 կետերից ոչ մեկի գագաթում չի կազմվում 90 աստիճանի անյկուն " << endl;
  }


  return 0;
}

void swap_row(float **arr,int size)
{
  float x,y;
  x=arr[0][0];
  y=arr[0][1];
  for(int i = 1; i < size; i++)
    {
      arr[i-1][0] = arr[i][0];
      arr[i-1][1] = arr[i][1];
    }
  arr[size-1][0] = x;
  arr[size-1][1] = y;
  
}
