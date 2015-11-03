//Արտագծում է երեք կոորդինատներով տրված երանկյանը շրջանագիծ
#include <cmath>
#include <iostream>
#include <graphics.h>

float square(float , float , float , float , float , float );
float side(float, float, float, float );
float ax(float, float, float, float );
float bx(float, float, float, float );

int main()
{

  float **a;
  a = new float *[2];
  for (int i =0; i<4; i ++)
        a[i] = new float [2];
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
  a[3][0]=-(bx(a[0][0],a[0][1],a[1][0],a[1][1])-bx(a[0][0],a[0][1],a[2][0],a[2][1]));
  a[3][0]=a[3][0]/(ax(a[0][0],a[0][1],a[1][0],a[1][1])-ax(a[0][0],a[0][1],a[2][0],a[2][1]));
  a[3][1]=-(bx(a[0][0],a[0][1],a[1][0],a[1][1])+ax(a[0][0],a[0][1],a[1][0],a[1][1])*a[3][0]);

  std::cout << "Շրջանագծի կենտրոնի x կոորդինատ` " << a[3][0] << std::endl;
  std::cout << "Շրջանագծի կենտրոնի y կոորդինատ` " << a[3][1] << std::endl;

  int gd = 0;
  int gm ;
  initgraph(&gd,&gm,NULL);

  line(0, 240, 640, 240);
  line(320, 0, 320, 480);
  setcolor(1);
  line(320+ a[0][0], 240-a[0][1], 320+a[1][0], 240-a[1][1]);
  line(320+ a[1][0], 240-a[1][1], 320+a[2][0], 240-a[2][1]);
  line(320+ a[2][0], 240-a[2][1], 320+a[0][0], 240-a[0][1]);
  setcolor(2);
  circle(320+a[3][0], 240-a[3][1], Radius);

  delay(15000);
  closegraph();

  for (int i =0; i<4; i ++)
        delete a[i];
  delete a;

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
