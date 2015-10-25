#include <iostream>
#include <math.h>

using namespace std;


double vector(double X1,double Y1,double X2,double Y2)
	{
		return   sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1)); 
	}

double mutq(string name)
{
	double kordinat;
	cout << name << "=";
	cin >> kordinat;
	return kordinat;
}
int main()
{
int n;
std::cout << "n=";
std::cin >> n;
int N[n][2];
int vectors[n];
for (int i=0 ; i<n ; ++i) {
	 N[i][0] = mutq ("X");
	 N[i][1] = mutq ("Y"); 
}	

for (int i=0 ; i<n ; ++i) {
	vectors[i] = vector(N[i][0],N[i][1],N[i+1][0],N[i+1][1]);
}

int flag = 0;
for (int i=0 ; i<n-1 ; ++i)
{
	if(vectors[i] * vectors[i+1] > 0 )
	{
		if( flag >= 0)
		{
			flag = 1;
		} 
		else {
			std::cout << "urucik bazmankyun che" << std::endl;
			return 0;
		       }
	} else {
		if( flag <= 0){
			flag = -1;
		} else {
			std::cout << "urucik bazmankyun che" << std::endl;
			return 0;
		}
	}
}
	std::cout << "urucik bazmankyun e" << std::endl;


for (int i=0 ; i<n-3 ; ++i)
{     
std::cout << "A keti het -> " << "(" << N[i+2][0] << "," <<N[i+2][1]<< ")" << " kety "<< std::endl;
}
  return 0;
}
