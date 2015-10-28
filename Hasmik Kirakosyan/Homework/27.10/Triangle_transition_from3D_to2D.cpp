#include <iostream>
#include <graphics.h>

struct point3D {
       int x;
       int y;
       int z;
       };
       
struct point2D {
       double x;
       double y;
       };
       
void triangleCoordinatesTransform (int dist, point3D first3D, point3D second3D, point3D third3D, point2D first2D,point2D second2D, point2D third2D){
   first2D.x=200+first3D.x*dist/(first3D.z+dist);
   first2D.y=200+first3D.y*dist/(first3D.z+dist);
   
   second2D.x=200+second3D.x*dist/(second3D.z+dist);
   second2D.y=200+second3D.y*dist/(second3D.z+dist);
   
   third2D.x=200+third3D.x*dist/(third3D.z+dist);
   third2D.y=200+third3D.y*dist/(third3D.z+dist);     
};
void drawTriangle (point2D first,point2D second,point2D third){
   int dist=50;
   point3D firstPoint3D, secondPoint3D, thirdPoint3D;
   
   std::cout<<"\nStart point 3D coordinates x,y,z:";
   std::cin>>firstPoint3D.x>>firstPoint3D.y>>firstPoint3D.z;
   
   std::cout<<"\nEnd point 3D coordinates x,y,z:";
   std::cin>>secondPoint3D.x>>secondPoint3D.y>>secondPoint3D.z;
   
   std::cout<<"\nThird point 3D coordinates x,y,z:";
   std::cin>>thirdPoint3D.x>>thirdPoint3D.y>>thirdPoint3D.z;
   triangleCoordinatesTransform (dist, firstPoint3D, secondPoint3D, thirdPoint3D, first, second, third);
   moveto (first.x, first.y);
   lineto (first.x, first.y);
   lineto (second.x, second.y);
   lineto (third.x, third.y);
   lineto (first.x, first.y);
};
  


int main (){
   int gd = DETECT,gm; 
   initgraph(&gd,&gm,NULL);
   cleardevice();
   

   int distFromDisp = 0;
   point2D firstPoint2D, secondPoint2D, thirdPoint2D;
   
   std::cout<<"\nWatcher distance from display ";
   std::cin>>distFromDisp;

   //triangleCoordinatesTransform(distFromDisp, firstPoint3D, secondPoint3D, thirdPoint3D,firstPoint2D, secondPoint2D, thirdPoint2D);
  
   drawTriangle (firstPoint2D, secondPoint2D, thirdPoint2D ); 
   std::cout<<firstPoint2D.x; 
   
   getch();
   closegraph();   
   return 0;
}
