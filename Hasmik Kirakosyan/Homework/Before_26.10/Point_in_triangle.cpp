#include <iostream>
#include <cmath>

using namespace std;


double area (double x1, double y1,double  x2, double y2, double  x3, float y3){ // Area, of triangle by vectors {point1,point2}X{pooint1, point3}
    
    float area = abs((x1*(y2-y3) +x2*(y3-y1)+x3*(y1-y2))/2); 
    return area;  
    }
    
bool is_there_triangle (double x1, double y1, double x2, double y2, double x3, double y3){
     
    return ((x1==x2 && y1==y2) || (x1==x3 && y1==y3) || (x3==x2 && y3==y2));
    }
    
int main () {
    
    float xtemp_point, ytemp_point, xA, yA, xB, yB, xC, yC;
    
    cout<<"\nEnter the coordinates of A point :"; // The first top of a triangle
    cin>>xA>>yA;
    
    cout<<"\nEnter the coordinates of B point :"; // The second top of a triangle
    cin>>xB>>yB;  
    
    cout<<"\nEnter the coordinates of C point :"; // The third top of a triangle
    cin>>xC>>yC; 
    
    cout<<"\nEnter the cordinates of any point to know is it inside the triangle or not? ";
    cin>>xtemp_point>>ytemp_point; // 
    
    if (!is_there_triangle(xA, yA, xB, yB, xC, yC)) {
                               
       if ((area(xtemp_point, ytemp_point, xA, yA, xB, yB)+area(xtemp_point, ytemp_point, xB, yB, xC, yC)+area(xtemp_point, ytemp_point, xA, yA, xC, yC))==area(xA, yA, xB, yB, xC, yC)) 
          cout<<"\nThe point is inside the triangle.";
                    else 
                         cout<<"\nThe point isn't inside the triangle.";
       }
         else
             cout<<"\nThere isn't a triangle with this coordinates.";
    
    return 0;
}

