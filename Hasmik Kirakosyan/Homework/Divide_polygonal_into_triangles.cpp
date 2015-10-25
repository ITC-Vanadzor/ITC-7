#include <iostream>

struct point {
       int x;
       int y;
       };
int direction (point N1, point N2, point N3) {
    return N1.x*(N2.y-N3.y)+N2.x*(N3.y-N1.y)+N3.x*(N1.y-N2.y);
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
 
  int i=1,j=0, k;
  start=tops[i+1];
  end=tops[i+3];
  k=i+3;
  while ((i<=n+1) && (j<n-3)) {
      if (direction(tops[i+1],tops[i+2],tops[i+3])*gen_dir<0 ) {
            start=tops[i+1];                                                
            end=tops[i+3];  
            std::cout<<"\nFrom ("<<start.x<<", "<<start.y<<") to ("<<end.x<<", "<<end.y<<")";
            start=end;
            k=i+3;                                                                                                  
      }  
      else {  
      
             std::cout<<"\nFrom ("<<start.x<<", "<<start.y<<") to ("<<end.x<<", "<<end.y<<")";
             end=tops[k+1];                   
           }
  
      i+=2; 
      j++;      
  }
  
 /* if (i!=(n-1)) {
              std::cout<<"\nThere is a convex polygonal with such coordinates ";
  }
   else      {
              std::cout<<"\nThere isn't a convex polygonal with such coordinates ";
             }

 */


 char ch;
 std::cin>>ch;
 return 0;    
}
