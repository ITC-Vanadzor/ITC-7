//Արտագծում է երեք կոորդինատներով տրված երանկյանը շրջանագիծ
#include <cmath>
#include <iostream>
#include <graphics.h>
//using namespace std;

float square(float , float , float , float , float , float );
float side(float, float, float, float );
float ax(float, float, float, float );
float bx(float, float, float, float );
void swap_row(float **arr,int size);
int main()
{

  float **a;
  a = new float *[2];
  for (int i =0; i<4; i ++)
        a[i] = new float [4];
  //  float a[4][2];
  float b[3];
  float s;
  for (int i = 0; i < 3; ++i){
    std::cout <<"Ներմուծել "<< i+1 << " կետի x կորդինատը" << std::endl;
    std::cin >> a[i][0];
    std::cout <<"Ներմուծել "<< i+1 << " կետի y կորդինատը" << std::endl;
    std::cin >> a[i][1];
  }
  s = square(a[0][0], a[0][1], a[1][0], a[1][1], a[2][0], a[2][1]);
  b[0] = side(a[0][0], a[0][1], a[1][0], a[1][1]);
  b[1] = side(a[0][0], a[0][1], a[2][0], a[2][1]);
  b[2] = side(a[1][0], a[1][1], a[2][0], a[2][1]);
  float Radius = b[0] * b[1] * b[2] / (4 * s);
  std::cout << "Արտագծած շրջանագծի պարագիծը հավասար է " << 2 * M_PI * Radius  << std::endl;


  //Շրջանագիծ կենտրոնի կոորդինատները
  a[3][0]=-(bx(a[0][0],a[0][1],a[1][0],a[1][1])-bx(a[0][0],a[0][1],a[2][0],a[2][1]))/(ax(a[0][0],a[0][1],a[1][0],a[1][1])-ax(a[0][0],a[0][1],a[2][0],a[2][1]));
  a[3][1]=-(bx(a[0][0],a[0][1],a[1][0],a[1][1])+ax(a[0][0],a[0][1],a[1][0],a[1][1])*a[3][0]);

  std::cout << a[3][0] << std::endl;
  std::cout << a[3][1] << std::endl;


  int gd = 0;
  int gm ;
  initgraph(&gd,&gm,NULL);

 //x coordinat
  line(0, 240, 640, 240);
  line(320, 0, 320, 480);
 
  //xz proection
  setcolor(1);
  line(320+ a[0][0], 240-a[0][1], 320+a[1][0], 240-a[1][1]);
  line(320+ a[1][0], 240-a[1][1], 320+a[2][0], 240-a[2][1]);
  line(320+ a[2][0], 240-a[2][1], 320+a[0][0], 240-a[0][1]);
  setcolor(2);
  circle(320+a[3][0], 240-a[3][1], Radius);


  delay(15000);
  closegraph();


 return 0;
}


float square(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float result = 0;
  result = std::abs((x3-x2)*(y2-y1)-(x2-x1)*(y3-y2))/2;
  return result;
}


float side(float x1, float y1, float x2, float y2)
{
  float result = 0;
  result = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return result;

}

float ax(float x1, float y1, float x2, float y2)
{
  float result = 0;
  result = (x1-x2)/(y1-y2);
  return result;

}

float bx(float x1, float y1, float x2, float y2)
{
  float result = 0;
  result = ax(x1,y1,x2,y2)*(x1+x2)/2+(y1+y2)/2;
  result=-result;
  return result;

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
