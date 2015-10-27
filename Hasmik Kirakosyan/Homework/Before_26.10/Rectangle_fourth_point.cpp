#include <iostream>

using namespace std;

int main() {
    int x1,y1;
    cout<<"\nX1 and Y1 "; 
    cin>>x1>>y1;
    
    int x2,y2;
    cout<<"\nX2 and Y2 ";
    cin>>x2>>y2;
    
    int x3,y3;
    cout<<"\nX3 and Y3 ";
    cin>>x3>>y3;
    
    int x4 = x3-abs(x2-x1);
    int y4 = y3-abs(y2-y1);
    
    int sqr_diagonal_1=(x4-x2)*(x4-x2)+(y4-y2)*(y4-y2);
    int sqr_diagonal_2=(x3-x1)*(x3-x1)+(y4-y2)*(y4-y2);
    
    if  (sqr_diagonal_1==sqr_diagonal_2) {
           cout<<"\n\n X4= "<<x4;
            cout<<"\n\n Y4= "<<y4;
        }
    else cout<<"\nThere isn't such a rectangle with this coordinates!";
    
    
    return 0;
}
