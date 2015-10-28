# include <iostream>
using std::cin;
using std::cout;
using std::endl;
# include <cmath>
#include <limits>

using namespace std;
//# include <cfloat>
static double pi=3.14159265358979323846;
static   double  R=30;

double CircleArea(){
	double area=pi*R*R;
    return area;
};

double SegmentArea( double corner){
	double segment=(pi*R*R*corner/360)-(R*R*sin(corner)/2);
    return segment;	
};

double GetCorner( double currentSegmentArea, double corner){
    
	
       double difference= currentSegmentArea;
       double currentArea=0;
    while(difference - currentArea > std::numeric_limits<double>::epsilon() ){
         currentArea+=SegmentArea(corner);
         corner+= 0.001;   //std::numeric_limits<double>::epsilon();
         }
    return corner;
};





int main()
{

	cout<<"Enter the quantity of guests\t";
	int QuantityOfGuests=-1;
	cin>>QuantityOfGuests;
		while(QuantityOfGuests<=0){
			cout<<"Enter the quantity of guests more than 0\t";
			cin>>QuantityOfGuests;
			}
		
	     
		 double areaOfCircle=CircleArea();// torti makeresi voroshum;
                 cout<<"AreaOfCake is\t"<<areaOfCircle<<endl;
                 double OnePeaceArea=areaOfCircle/QuantityOfGuests;//voroshum enq mi ktori makekresi qanak@
		 
		 double SumofSegments = 0;
		 double  areaOfPreviousSegments=0;
                 double corner=0;
                 double areaOfBigSegment = OnePeaceArea;     
		 for( int i = 1 ; i <= QuantityOfGuests ; ++i){
                          corner=GetCorner(areaOfBigSegment, corner);
                          cout<<"The corner \t"<<corner<<endl;
			  areaOfBigSegment = SegmentArea( corner);
			  double areaOfSegment = areaOfBigSegment - areaOfPreviousSegments ;
			  cout << " The \t " << i << "-th  area of segment will be \t " << areaOfSegment << endl ;
     
         		 double areaOfPreviousSegments=areaOfSegment;
		         SumofSegments+= areaOfSegment ;
                       }
			cout<<"Sum of segments is \t"<<SumofSegments<<endl;
			
		 
	

return 0;
}
	
