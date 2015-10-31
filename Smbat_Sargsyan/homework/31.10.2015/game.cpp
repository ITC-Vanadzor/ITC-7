// A ev B xmberic Armany ev Ashoty karox en vercnel 0,1 kam 2 hat ynkuyz,haxtum e na ov vercnum e verjin ynkuyzy
#include <iostream>
void Arman(int n);
void Ashot(int n);
int main()
{
int A,B;
std::cout << "A= " ; std::cin >> A;
std::cout <<" B= " ; std::cin >> B;
int qanak=A+B;
do
{
  Arman(qanak);
  Ashot(qanak);
} while(qanak==0);
return 0;
}
void Arman(int n)
{
        int i;
	for(i=0;i<=2;i++)
	{
		if(n-i==4)
                     { n=n-i;}
		else   n=n-1; 
        }
	if(n<1) std::cout << "haxtec Armany" ;
	else Ashot(n); }
void Ashot(int n)
{       
       for(int j=0;j<=2;j++)
	{ 
          n=n-j;
        }
if(n<1) std::cout << "hatec Ashoty ";
else  Arman(n);
}
