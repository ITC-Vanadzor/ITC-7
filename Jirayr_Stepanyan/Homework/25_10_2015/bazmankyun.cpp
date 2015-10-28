#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double vekartd(double x1, double y1, double x2, double y2, double x3, double y3) // vekartd = vektorakan artadryal
{
  return ((x3-x2)*(y2-y1))-((x2-x1)*(y3-y2));
}

int main()
{	
	int i;
	cout << "qani ankyun uni dzer bazmankyun@???" << endl;
	cin >> i;
	int j = i;
        double a[i][2];
  	double s[i];
  	for (int i=0; i < j; ++i)
	{
    		cout <<"tpel "<< i+1 << "keti x kordinat@";
	    	cin >> a[i][0];
	    	cout <<"tpel "<< i+1 << "keti y kordinat@";
	    	cin >> a[i][1];
	}
  	for(int j = 0; j <= i; ++j)
  	{
  		s[j]=vekartd(a[j][0],a[j][1],a[j + 1][0],a[j + 1][1],a[j + 2][0],a[j + 2][1]);
	}
	int x = 0;
	if(s[x] > 0)
	{	
		for(x = 1; x <= i; ++x)
		{	
			if(s[x] < 0)
			{
				cout << "urucik chi";
				exit(1);
			}
		}
		cout << "dzer bazmankyun@ urucik e" << endl;
	}
	if(s[x] < 0)
	{
		for(x = 1; x <= i; ++x)
		{	
			if(s[x] > 0)
			{
				cout << "urucik chi";
				exit(1);
			}
		}
		cout << "dzer bazmankyun@ urucik e" << endl;	
  	}
	else
	{
		cout << "goyutyun chuni ";
		exit(1);
	}

  return 0;
}
