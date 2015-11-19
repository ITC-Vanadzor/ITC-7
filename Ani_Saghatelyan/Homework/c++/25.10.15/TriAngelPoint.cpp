# include <iostream>
using namespace std;
# include <cmath>
#include <limits>
#include <iomanip> 
using namespace std;


  float Side( float x1,float y1,float x2,float y2){
	return  sqrt(pow(x2-x1,2)+pow(y2-y1,2));
};
 

  float Area( float a, float b, float c){
	   float p=(a+b+c)/2;
	   return sqrt(p*(p-a)*(p-b)*(p-c));
       };


int main()
{
	float x1,y1,x2,y2,x3,y3;
	cout<<"Enter the coordinates of vertices of the triangle x1,y1,x2,y2,x3,y3 with tabs\n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;

	cout<<"Enter the coordinates of the point\n";
	float X;
	float Y;
	cin>>X>>Y;

	float AB=Side(x1,y1,x2,y2);
	float AC=Side(x1,y1,x3,y3);
	float BC=Side(x2,y2,x3,y3);
	  if(AB<AC+BC && AC<AB+BC && BC<AB+AC){
		cout<<"It's a triangle\n";
	    float AreaABC=Area(AB,AC,BC);
	    float AD=Side(x1,y1,X,Y);
	    float DC=Side(X,Y,x3,y3);
	    float BD=Side(x2,y2,X,Y);
	
	    float AreaADC=Area(AD,DC,AC);
	    cout<<setprecision(20)<<showpoint<<"AreaADC\t"<<AreaADC<<endl;
	
	    float AreaADB=Area(AD,BD,AB);
	    cout<<"AreaADB\t"<<AreaADB<<endl;
	
	    float AreaBDC=Area(BD,BC,DC);
	    cout<<"AreaBDC\t"<<AreaBDC<<endl;

        float Sum=AreaBDC+AreaADB+AreaADC; 
        cout<<"Sum\t"<<Sum<<"\t"<<"AreaABC\t"<<AreaABC<<endl;

		if(Sum<(AreaABC+numeric_limits<float>::epsilon())){
			//if((Sum-AreaABC)<numeric_limits<float>::epsilon()){
		        cout<<"The point is on triangle\n";
	                 }
	                else cout<<"No! The point isn't on triangle\n";
	             }
	 else  
               cout<<"No!! It isn't triangle\n";
			   
		       return 0;
}