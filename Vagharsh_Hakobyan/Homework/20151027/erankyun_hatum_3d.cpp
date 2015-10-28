//Եռանկյունների հատում տարածության մեջ (էպյուրների մեթոդով)
#include <cmath>
#include <graphics.h>
#include <iostream>
using namespace std;

float vektorakan_artadryal(float x1, float y1, float x2, float y2, float x3, float y3){
  return (x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
}


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


int main()
{
  float pix[12][3];
  //from 65 to 70 is equal a 'A' to 'F' ascii codes
  for (int i=65;i<71;++i){
    //from 120 to 122 is equal a 'x' to 'z' ascii codes
    for (int j=120;j<123;++j){
      pix[i-65][j-120] = input_number(i,j);
    }
  }
  // I helping pixel
  pix[6][0]=b(pix[0][0],pix[0][1],pix[1][0],pix[1][1])-b(pix[4][0],pix[4][1],pix[5][0],pix[5][1]);
  pix[6][0]=-pix[6][0]/(a(pix[0][0],pix[0][1],pix[1][0],pix[1][1])-a(pix[4][0],pix[4][1],pix[5][0],pix[5][1]));
  pix[6][1]=pix[6][0]*a(pix[0][0],pix[0][1],pix[1][0],pix[1][1])+b(pix[0][0],pix[0][1],pix[1][0],pix[1][1]);
  pix[6][2]=pix[6][0]*a(pix[0][0],pix[0][2],pix[1][0],pix[1][2])+b(pix[0][0],pix[0][2],pix[1][0],pix[1][2]);

  // II hepling pixel
  pix[7][0]=b(pix[0][0],pix[0][1],pix[2][0],pix[2][1])-b(pix[4][0],pix[4][1],pix[5][0],pix[5][1]);
  pix[7][0]=-pix[7][0]/(a(pix[0][0],pix[0][1],pix[2][0],pix[2][1])-a(pix[4][0],pix[4][1],pix[5][0],pix[5][1]));
  pix[7][1]=pix[7][0]*a(pix[0][0],pix[0][1],pix[2][0],pix[2][1])+b(pix[0][0],pix[0][1],pix[2][0],pix[2][1]);
  pix[7][2]=pix[7][0]*a(pix[0][0],pix[0][2],pix[2][0],pix[2][2])+b(pix[0][0],pix[0][2],pix[2][0],pix[2][2]);

  //first section pixel
  pix[8][0]=b(pix[6][0],pix[6][2],pix[7][0],pix[7][2])-b(pix[4][0],pix[4][2],pix[5][0],pix[5][2]);
  pix[8][0]=-pix[8][0]/(a(pix[6][0],pix[6][2],pix[7][0],pix[7][2])-a(pix[4][0],pix[4][2],pix[5][0],pix[5][2]));
  pix[8][2]=pix[8][0]*a(pix[6][0],pix[6][2],pix[7][0],pix[7][2])+b(pix[6][0],pix[6][2],pix[7][0],pix[7][2]);
  pix[8][1]=pix[8][0]*a(pix[6][0],pix[6][1],pix[7][0],pix[7][1])+b(pix[6][0],pix[6][1],pix[7][0],pix[7][1]);

  // III helping pixel
  pix[9][0]=b(pix[1][0],pix[1][2],pix[2][0],pix[2][2])-b(pix[4][0],pix[4][2],pix[5][0],pix[5][2]);
  pix[9][0]=-pix[9][0]/(a(pix[1][0],pix[1][2],pix[2][0],pix[2][2])-a(pix[4][0],pix[4][2],pix[5][0],pix[5][2]));
  pix[9][2]=pix[9][0]*a(pix[4][0],pix[4][2],pix[5][0],pix[5][2])+b(pix[4][0],pix[4][2],pix[5][0],pix[5][2]);
  pix[9][1]=pix[9][0]*a(pix[4][0],pix[4][1],pix[5][0],pix[5][1])+b(pix[4][0],pix[4][1],pix[5][0],pix[5][1]);

  // IV helping pixel
  pix[10][0]=b(pix[1][0],pix[1][2],pix[2][0],pix[2][2])-b(pix[3][0],pix[3][2],pix[4][0],pix[4][2]);
  pix[10][0]=-pix[10][0]/(a(pix[1][0],pix[1][2],pix[2][0],pix[2][2])-a(pix[3][0],pix[3][2],pix[4][0],pix[4][2]));
  pix[10][2]=pix[10][0]*a(pix[3][0],pix[3][2],pix[4][0],pix[4][2])+b(pix[3][0],pix[3][2],pix[4][0],pix[4][2]);
  pix[10][1]=pix[10][0]*a(pix[3][0],pix[3][1],pix[4][0],pix[4][1])+b(pix[3][0],pix[3][1],pix[4][0],pix[4][1]);

  //second section pixel
  pix[11][0]=b(pix[1][0],pix[1][1],pix[2][0],pix[2][1])-b(pix[9][0],pix[9][1],pix[10][0],pix[10][1]);
  pix[11][0]=-pix[11][0]/(a(pix[1][0],pix[1][1],pix[2][0],pix[2][1])-a(pix[9][0],pix[9][1],pix[10][0],pix[10][1]));
  pix[11][1]=pix[11][0]*a(pix[1][0],pix[1][1],pix[2][0],pix[2][1])+b(pix[1][0],pix[1][1],pix[2][0],pix[2][1]);
  pix[11][2]=pix[11][0]*a(pix[1][0],pix[1][2],pix[2][0],pix[2][2])+b(pix[1][0],pix[1][2],pix[2][0],pix[2][2]);
  



  int gd = 9;
  int gm = 2;
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
