# include <iostream>
using std::cin;
using std::cout;
using std::endl;
# include <cmath>
using namespace std;


double CircleArea( int r, double p){
	double area=p*r*r;
    return area;
};

float GetCorner(int guests){
	float corner=360/(float)guests;
    return corner;
};
double SegmentArea( float corner,double circleArea, int r){
	double segment=circleArea*corner/360-r*r/2*sin(corner);
    return segment;	
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
		
	     double pi=3.1419;
	     int R=30;
		 double areOfCircle=CircleArea(R,pi);
		 cout<<"The whole cakes's area is\t"<<areOfCircle<<endl;
		 float corner=GetCorner(QuantityOfGuests);
		 double SumofSegments = 0;
		 double  areaOfPreviousSegments=0;
		 for( int i = 1 ; i < QuantityOfGuests ; ++i){
			  double areaOfBigSegment = SegmentArea( corner , areOfCircle , R);
			//  cout<<"areaOfBig<<Segment-SumofSegments\t"<<areaOfBigSegment<<" - "<<SumofSegments<<endl;
			  corner += corner ;
			  cout<<"AreaofBigsegment\t"<<areaOfBigSegment<<endl;
			  double areaOfSegment = areaOfBigSegment - areaOfPreviousSegments ;
			  cout << " The \t " << i << "-th  area of segment will be \t " << areaOfSegment << endl ;
			  areaOfPreviousSegments=areaOfBigSegment;
		      SumofSegments+= areaOfSegment ;
			  //	cout<<"The sum of  area segments will be\t"<<SumofSegments<<endl;
		       //cout<<endl;
			
		 }
	

return 0;
}
	
