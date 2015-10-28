//Եռանկյունների հատում տարածության մեջ 
#include <cmath>
#include <iostream>
using namespace std;

float vektorakan_artadryal(float x1, float y1, float x2, float y2, float x3, float y3){
  return (x3-x2)*(y2-y1)-(x2-x1)*(y3-y2);
}


float input_number(char pixel, char coordinat){
    cout << "Ներմուծել " << pixel << " կետի " << coordinat << " կոորդինատը " << endl;
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
  float pixels[12][3];
  //from 65 to 70 is equal a 'A' to 'F' ascii codes
  for (int i=65;i<71;++i){
    //from 120 to 122 is equal a 'x' to 'z' ascii codes
    for (int j=120;j<123;++j){
      pixels[i-65][j-120] = input_number(i,j);
    }
  }
  //first helping pixel
  pixels[6][0]=b(pixels[0][0],pixels[0][1],pixels[1][0],pixels[1][1])-b(pixels[4][0],pixels[4][1],pixels[5][0],pixels[5][1]);
  pixels[6][0]=-pixels[6][0]/(a(pixels[0][0],pixels[0][1],pixels[1][0],pixels[1][1])-a(pixels[4][0],pixels[4][1],pixels[5][0],pixels[5][1]));
  pixels[6][1]=pixels[6][0]*a(pixels[0][0],pixels[0][1],pixels[1][0],pixels[1][1])+b(pixels[0][0],pixels[0][1],pixels[1][0],pixels[1][1]);
  pixels[6][2]=pixels[6][0]*a(pixels[0][0],pixels[0][2],pixels[1][0],pixels[1][2])+b(pixels[0][0],pixels[0][2],pixels[1][0],pixels[1][2]);

  //second hepling point
  pixels[7][0]=b(pixels[0][0],pixels[0][1],pixels[2][0],pixels[2][1])-b(pixels[4][0],pixels[4][1],pixels[5][0],pixels[5][1]);
  pixels[7][0]=-pixels[6][0]/(a(pixels[0][0],pixels[0][1],pixels[2][0],pixels[2][1])-a(pixels[4][0],pixels[4][1],pixels[5][0],pixels[5][1]));
  pixels[7][1]=pixels[7][0]*a(pixels[0][0],pixels[0][1],pixels[2][0],pixels[2][1])+b(pixels[0][0],pixels[0][1],pixels[2][0],pixels[2][1]);
  pixels[7][2]=pixels[7][0]*a(pixels[0][0],pixels[0][2],pixels[2][0],pixels[2][2])+b(pixels[0][0],pixels[0][2],pixels[2][0],pixels[2][2]);



  return 0;
}
