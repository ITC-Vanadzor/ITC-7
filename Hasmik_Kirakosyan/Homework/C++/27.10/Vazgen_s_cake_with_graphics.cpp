#include <iostream>
#include <graphics.h>
#include <math.h>

int main()
{ 
   int x = 320, y = 240, radius;
   int n;
   
 
   int gd=DETECT,gm; 
   initgraph(&gd,&gm,NULL);
   cleardevice();

   float x_cur, y_cur;
   std::cout<<"\nn= ";
   std::cin>>n;
   
   radius =50;
  // std::cout<<"\n "<<n<<"\n "<<(int) sin(2*M_PI/n)<<"\n "<<(int) cos(2*M_PI/n)*radius;
   
   y_cur=(int) sin(2*M_PI/n)*radius;
   x_cur=(int) cos(2*M_PI/n)*radius;
   
 
      
      circle(x, y, radius);
      for (int i=1; i<=n; i++) {
                                    y_cur= sin(2*M_PI/n*i)*radius;
                                    x_cur= cos(2*M_PI/n*i)*radius; 
                                    moveto(320,240);
                                    lineto(320,240);
                                    lineto(x+x_cur,y+y_cur);
      }
      
            
   getch();
   closegraph();
   return 0;
}
