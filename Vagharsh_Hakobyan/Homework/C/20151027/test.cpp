//Գրաֆիկական գրադարանի ինստալյացիան և օգրագործումը նայել այստեղ
// https://askubuntu.com/questions/525051/how-do-i-use-graphics-h-in-ubuntu
/*  demo.c*/
#include<graphics.h>
//#include <iostream>
//using namespace std;
int main()
{
  //int gd = DETECT,gm;
  int gd = 9;
  int gm = 2;
   initgraph(&gd,&gm,NULL);


   rectangle(20, 20, 40, 120);
   //circle(x, y, radius);
   //bar(left + 300, top, right + 300, bottom);
   line(0, 240, 600, 240);
   //ellipse(x, y + 200, 0, 360, 100, 50);
   //outtextxy(left + 100, top + 325, "C Graphics Program");

   delay(15000);
   closegraph();
   return 0;
}

