#include <cmath>
#include <iostream>

float squareTriangle(float , float , float , float , float , float );
float sideLenght(float , float , float , float );

int main()
{

  float a[3][2];
  float side[3];
  for (int i = 0; i < 3; ++i){
    std::cout <<"Import "<<" coordinate x of top " << i + 1 <<std::endl;
    std::cin >> a[i][0];
    std::cout <<"Import "<<" coordinate y of top " << i + 1 <<std::endl;
    std::cin >> a[i][1];
  }
  float square = squareTriangle(a[0][0], a[0][1], a[1][0], a[1][1], a[2][0], a[2][1]);
  side[0] = sideLenght(a[0][0], a[0][1], a[1][0], a[1][1]);
  side[1] = sideLenght(a[0][0], a[0][1], a[2][0], a[2][1]);
  side[2] = sideLenght(a[1][0], a[1][1], a[2][0], a[2][1]);
  float Radius = side[0] * side[1] * side[2] / (4 * square);
  std::cout << "Radius of outside circle will be  " << 2 * M_PI * Radius  << std::endl; 
 return 0;
}


float squareTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float result = 0;
  result = std::abs((x3-x2)*(y2-y1)-(x2-x1)*(y3-y2))/2;
  return result;
}

float sideLenght(float x1, float y1, float x2, float y2)
{
  float result = 0;
  result = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return result;
}
