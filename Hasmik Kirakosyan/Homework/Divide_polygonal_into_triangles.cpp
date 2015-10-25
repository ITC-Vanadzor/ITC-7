#include <iostream>

struct point {
       int x;
       int y;
       };
int direction (point N1, point N2, point N3) {
    return N1.x*(N2.y-N3.y)+N2.x*(N3.y-N1.y)+N3.x*(N1.y-N2.y);
} 

int  scalar_compos (point a, point b, point c) {
                   if (((a.x-b.x)*(c.x-b.x)+(a.y-b.y)*(c.y-b.y))>=0) return  1;
                      else return -1;    
     }

int main (){
 int n;   
 std::cout<<"\nInput number of sides in polygonal :";
 std::cin>>n;
 
 point tops [n+1];
 
 for (int i=1; i<=n; i++) {
 std::cout<<"\nInput x,y coordinates for "<<i<<"th top :";
 std::cin>>tops[i].x>>tops[i].y;     
 }
 tops[n+1].x=tops[1].x;
 tops[n+1].y=tops[1].y;
 
 int gen_dir=direction(tops[1], tops[2], tops[3]);
 point start, end;
 
  int i=1;
  for (i=2; i<=n-1; i++) {
      if (direction(tops[i],tops[i+1],tops[i+2])*gen_dir<0) {                                                
      break;
      }    
  }
  
  if (i<(n-1)) {
              std::cout<<"\nThere isn't convex polygonal with such coordinates ";
              int j=1;
              while (j<=n-1) {
                         if (scalar_compos(tops[j], tops[j+1], tops[j+2])>0 && direction(tops[j],tops[j+1],tops[j+2])*gen_dir>0 &&  
                         tops[j],tops[j+2] hatvacy chi hatvum koxmeric gone meki het) {
                                                              start=tops[j];
                                                              end=tops[j+2];
                                                             std::cout<<"\nFrom ("<<start.x<<", "<<start.y<<") to ("<<end.x<<", "<<end.y<<")"; 
                                                    }
                         else j++;
                    }
  }
   else      {
              std::cout<<"\nThere is a convex polygonal with such coordinates ";
              start=tops[1];
              for (i=3; i<=n-1; i++) {
                  end=tops[i];
                  std::cout<<"\nFrom ("<<start.x<<", "<<start.y<<") to ("<<end.x<<", "<<end.y<<")";
              }
             }

 


 char ch;
 std::cin>>ch;
 return 0;    
}
