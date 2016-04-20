#include <iostream>
int gumar=0;
int min;
int TvGum(int gumar)
{
int mnacord,ncopy;
while(ncopy>0)
{
mnacord=ncopy%10;
gumar=gumar+mnacord;
ncopy=mnacord;
}
return gumar;
}
int Stugum(int gumar1,int gumar2,int goodnumb1,int goodnumb2)
{
int min;
if ( gumar1 > gumar2 ) 
{  min = goodnumb1 ;}
     else if( gumar1 < gumar2) 
{  min = goodnumb2;}
     else if( gumar1 == gumar2 ) 
{ if  (goodnumb1 > goodnumb2)
{  min = goodnumb2 ;
     else min=goodumb1;
}
            
    return min;
}    

int main()
{
int n=-1;
std::cout << "n= "; 
std::cin >> n;
while(n<0)
{
std::cout << "mutqagreq bnakan tiv" << std::endl;
std::cout << "n= ";
std::cin >> n;
}
int ncopy=n;
 for (int i=1;i<=n/2; ++i) 
{
 if(n%i==0 )
{
	int TvGum = TvGum(i) ;
	int min = TvGum (min) ;
}
}
std::cout << "min= " << min << std::endl;
return 0;
}




