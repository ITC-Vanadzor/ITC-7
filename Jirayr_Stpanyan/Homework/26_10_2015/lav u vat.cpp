#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int gumar(int a)
{
	int gumar=0, temp;
	temp=a;
	while (temp >= 1)
	{
	    	gumar=gumar+temp%10;
	    	temp=temp/10;
	}
  return gumar;
}

int vat(int a,int b)
{
	int k;
        if ( gumar(a) > gumar(b) )
        {
    		k=b;
 	}
  	else
 	{
        	if (gumar(a) == gumar(b) )
       		{
			if(a == b)
			{
				k = a;
			}
 				if ( a < b )
				{
					k=b;
				}
        			else 
				{
					k=a;
        			}
      		}
    		else
      		{
       			k=a;
      		}
  	}
  return k;
}

int lav(int a,int b)
{
	int k;
        if ( gumar(a) > gumar(b) )
        {
    		k=a;
 	}
  	else
 	{
        	if (gumar(a) == gumar(b) )
       		{
			if(a == b)
			{
				k = a;
			}
 			if ( a < b )
			{
				k=a;
			}
        		else 
			{
				k=b;
        		}
      		}
    		else
      		{
       			k=b;
      		}
  	}
  return k;
}



int main()
{
  int number;
  cout << "tpel kamayakan amboxj tiv " << endl;
  cin >> number;
  int k[3] = {0,0,0};
  int h[3] = {0,0,0};
  for(int i = 2; i <= number/2; ++i)
    {
		if(number%i == 0)
		{
			++k[2];
			if(!k[0] && !k[1])
				k[0] = vat(number, i);
			if(k[0] && !k[1])
				k[1] = vat(number, i);
			if(k[0] && k[1])
			{
				k[0] = vat(k[0], k[1]);
				k[1] = 0;;
			}			
			if(!h[0] && !h[1])
				h[0] = lav(number, i);
			if(h[0] && !h[1])
				h[1] = lav(number, i);
			if(h[0] && h[1])
			{
				h[0] = lav(h[0], h[1]);
				h[1] = 0;;
			}	
		}
    } 	
    if(k[2] == 0)
	cout << "miak bajanarar@  = " << number << endl; 
    else
    {   	
 	cout << "amenavat bajanarar@ = " << k[0] << endl;
	cout << "amenalav bajanarar@ = " << h[0] << endl;
    }

  return 0;
}
