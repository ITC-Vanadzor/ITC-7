#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  
  double x1, x2, x3, y1, y2, y3;
  double xa, ya, xb, yb, xc, yc, xd, yd;
  double ab, ac, bc, AB, AC, BC;
  
  cout<<"Nermuceq uxxankyan 3 haytni gagatneri koordinatner@"<<endl;
  cout<<"x1=";  cin>>x1;
  cout<<"y1=";  cin>>y1;
  cout<<"x2=";  cin>>x2;
  cout<<"y2=";  cin>>y2;
  cout<<"x3=";  cin>>x3;
  cout<<"y3=";  cin>>y3;
  cout<<endl;
  
  ab=(pow(x2-x1,2)+pow(y2-y1,2));  //AB uxxi erkarutyan qarakusin e
  ac=(pow(x3-x1,2)+pow(y3-y1,2));  //AC ankyunagci erkarutyan qarakusin e
  bc=(pow(x3-x2,2)+pow(y3-y2,2));  //BC hatvaci erkarutyan qarakusin e
  
  //uxix  ankyun  ka te che-->
  if (ab+bc==ac)   {xa=x1; xb=x2; xc=x3;
                                         ya=y1; yb=y2; yc=y3;}
    else
    if (ac+ab==bc)   {xa=x3; xb=x1; xc=x2;
                                           ya=y3; yb=y1; yc=y2;}
    else
    if (bc+ac==ab)   {xa=x2; xb=x3; xc=x1;
                                           ya=y2; yb=y3; yc=y1;}
    else {cout<<"Trvac keter@ chen karox linel voreve uxxankyan gagatnaketer"<<endl;
          return -1;}
          
    xd=xa-xb+xc;  //4-rd keti (x,y)-@
    yd=ya-yb+yc;
    cout<<"Pntrvogh keti koordinatner@ hetevyaln en:  ("<<xd<<","<<yd<<")"<<endl;
    
 return 0;
}

