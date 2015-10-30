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
       
void triangleCoordinatesTransform (int dist, point3D first3D, point3D second3D, point3D third3D, point2D *first2D, point2D *second2D, point2D *third2D){
   first2D->x=200+first3D.x*dist/(first3D.z+dist);
   first2D->y=200+first3D.y*dist/(first3D.z+dist);
   
   second2D->x=200+second3D.x*dist/(second3D.z+dist);
   second2D->y=200+second3D.y*dist/(second3D.z+dist);
   
   third2D->x=200+third3D.x*dist/(third3D.z+dist);
   third2D->y=200+third3D.y*dist/(third3D.z+dist);     
};
void drawTriangle (point2D first2D,point2D second2D, point2D third2D, int colornum){
   setcolor(colornum);
   int shape[] = {
     (int) first2D.x,(int) first2D.y,
     (int)second2D.x,(int) second2D.y,
     (int)third2D.x,(int) third2D.y,
     (int)first2D.x,(int) first2D.y
   };
   
    setfillstyle(INTERLEAVE_FILL, MAGENTA);
    fillpoly(4, shape);
};
  


int main (){
   int gd = DETECT,gm; 
   initgraph(&gd,&gm,NULL);
   cleardevice();
   

   int distFromDisp = 0;
  
   
   std::cout<<"\nWatcher distance from display ";
   std::cin>>distFromDisp;

   point3D firstPoint3D_1, secondPoint3D_1, thirdPoint3D_1;
   
   std::cout<<"\nStart point 3D coordinates x,y,z:";
   std::cin>>firstPoint3D_1.x>>firstPoint3D_1.y>>firstPoint3D_1.z;
   
   std::cout<<"\nEnd point 3D coordinates x,y,z:";
   std::cin>>secondPoint3D_1.x>>secondPoint3D_1.y>>secondPoint3D_1.z;
   
   std::cout<<"\nThird point 3D coordinates x,y,z:";
   std::cin>>thirdPoint3D_1.x>>thirdPoint3D_1.y>>thirdPoint3D_1.z;
   
   point3D firstPoint3D_2, secondPoint3D_2, thirdPoint3D_2;
   
   std::cout<<"\nStart point 3D coordinates x,y,z:";
   std::cin>>firstPoint3D_2.x>>firstPoint3D_2.y>>firstPoint3D_2.z;
   
   std::cout<<"\nEnd point 3D coordinates x,y,z:";
   std::cin>>secondPoint3D_2.x>>secondPoint3D_2.y>>secondPoint3D_2.z;
   
   std::cout<<"\nThird point 3D coordinates x,y,z:";
   std::cin>>thirdPoint3D_2.x>>thirdPoint3D_2.y>>thirdPoint3D_2.z;
   
   point2D firstPoint2D_1, secondPoint2D_1, thirdPoint2D_1;
   
   triangleCoordinatesTransform(distFromDisp, firstPoint3D_1, secondPoint3D_1, thirdPoint3D_1, &firstPoint2D_1, &secondPoint2D_1, &thirdPoint2D_1);

   drawTriangle (firstPoint2D_1, secondPoint2D_1, thirdPoint2D_1, 7 );
   
   
   point2D firstPoint2D_2, secondPoint2D_2, thirdPoint2D_2;
   
   triangleCoordinatesTransform(distFromDisp, firstPoint3D_2, secondPoint3D_2, thirdPoint3D_2, &firstPoint2D_2, &secondPoint2D_2, &thirdPoint2D_2);

   drawTriangle (firstPoint2D_2, secondPoint2D_2, thirdPoint2D_2, 5 ); 
   
 
   
   getch();
   restorecrtmode();   
   return 0;
}
