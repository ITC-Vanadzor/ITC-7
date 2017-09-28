//Գրաֆիկական գրադարանի ինստալյացիան և օգրագործումը նայել այստեղ
// https://askubuntu.com/questions/525051/how-do-i-use-graphics-h-in-ubuntu
//Եռանկյունների հատում տարածության մեջ (էպյուրների մեթոդով)
#include <cmath>
#include <graphics.h>
#include <iostream>
using namespace std;



float input_number(char pixel, char coordinat){
  cout << "Ներմուծել " << pixel << " կետի " << coordinat << " կոորդինատը" << endl;
  float n;
  cin >> n; 
  return n;
}

float a(float x1, float y1, float x2, float y2){
  float n=(y2-y1)/(x2-x1);
  return n;
}

float b(float x1, float y1, float x2, float y2){
  float n=y1-a(x1,y1,x2,y2)*x1;
  return n;
}


void helping_pix(float **arr,int pixel1, int pixel2, int pixel3, int pixel4, int pixel5, int position)
{
  arr[pixel5][0]=b(arr[pixel1][0],arr[pixel1][position],arr[pixel2][0],arr[pixel2][position])-b(arr[pixel3][0],arr[pixel3][position],arr[pixel4][0],arr[pixel4][position]);
  arr[pixel5][0]=-arr[pixel5][0]/(a(arr[pixel1][0],arr[pixel1][position],arr[pixel2][0],arr[pixel2][position])-a(arr[pixel3][0],arr[pixel3][position],arr[pixel4][0],arr[pixel4][position]));
  arr[pixel5][1]=arr[pixel5][0]*a(arr[pixel3][0],arr[pixel3][1],arr[pixel4][0],arr[pixel4][1])+b(arr[pixel3][0],arr[pixel3][1],arr[pixel4][0],arr[pixel4][1]);
  arr[pixel5][2]=arr[pixel5][0]*a(arr[pixel3][0],arr[pixel3][2],arr[pixel4][0],arr[pixel4][2])+b(arr[pixel3][0],arr[pixel3][2],arr[pixel4][0],arr[pixel4][2]);

}


int main()
{
  float **pix;
  pix = new float *[12];
  for (int i =0; i<12; ++i){
        pix[i] = new float [3];
  }
  //from 65 to 70 is equal a 'A' to 'F' ascii codes
  for (int i=65;i<71;++i){
    //from 120 to 122 is equal a 'x' to 'z' ascii codes
    for (int j=120;j<123;++j){
      pix[i-65][j-120] = input_number(i,j);
    }
  }
  // I helping pixel
  helping_pix(pix,4,5,0,1,6,1);

  // II hepling pixel
  helping_pix(pix,4,5,0,2,7,1);

  //first section pixel
  helping_pix(pix,6,7,4,5,8,2);

  // III helping pixel
  helping_pix(pix,1,2,4,5,9,2);

  // IV helping pixel
  helping_pix(pix,1,2,4,3,10,2);

  //second section pixel
  helping_pix(pix,9,10,1,2,11,1);
  

  int gd = 0;
  int gm ;
  initgraph(&gd,&gm,NULL);

  //x coordinat
  line(0, 240, 640, 240);
 
  //xz proection
  setcolor(1);
  line(pix[0][0], 240-pix[0][2], pix[1][0], 240-pix[1][2]);
  line(pix[1][0], 240-pix[1][2], pix[2][0], 240-pix[2][2]);
  line(pix[2][0], 240-pix[2][2], pix[0][0], 240-pix[0][2]);
  setcolor(2);
  line(pix[3][0], 240-pix[3][2], pix[4][0], 240-pix[4][2]);
  line(pix[4][0], 240-pix[4][2], pix[5][0], 240-pix[5][2]);
  line(pix[5][0], 240-pix[5][2], pix[3][0], 240-pix[3][2]);
  setcolor(4);
  line(pix[8][0], 240-pix[8][2], pix[11][0], 240-pix[11][2]);

  //xy proection
  setcolor(1);
  line(pix[0][0], 240+pix[0][1], pix[1][0], 240+pix[1][1]);
  line(pix[1][0], 240+pix[1][1], pix[2][0], 240+pix[2][1]);
  line(pix[2][0], 240+pix[2][1], pix[0][0], 240+pix[0][1]);
  setcolor(2);
  line(pix[3][0], 240+pix[3][1], pix[4][0], 240+pix[4][1]);
  line(pix[4][0], 240+pix[4][1], pix[5][0], 240+pix[5][1]);
  line(pix[5][0], 240+pix[5][1], pix[3][0], 240+pix[3][1]);
  setcolor(4);
  line(pix[8][0], 240+pix[8][1], pix[11][0], 240+pix[11][1]);

  delay(15000);
  closegraph();

  return 0;
}
