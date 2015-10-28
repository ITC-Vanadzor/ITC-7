// torty  bazhanenq N havasar maseri
// 0.1 chtutyamb bazhanum e
// tpum e i-rd masi makeresy, sektori kazmac ankyuny, ev keteri koordinatnery
#include <iostream>
#include <cmath>

#define R 100	//sharavix
#define M_PI       3.14159265358979323846
#define POKR_TIV 0.0001
#define OX 0 //shrjanagci kentroni koordinatnern en
#define OY 0

double segmenti_makeres(double i){	
		
	double sinus_i=(double)sin(double(i*M_PI/180));
	return ((M_PI*R*R*i)/360)-(R*R*sinus_i/2);
}

double gtir_segmenti_ankyun(double skzbnakan_alfa,double maseri_makeres)
{
	double s=0;
	for(double i=skzbnakan_alfa;i<360;i+=POKR_TIV){
		
		s=segmenti_makeres(i);	
		double x=abs(maseri_makeres-s);
		if (x<0.1){
			return i;
		}
	}
	return 0;
}
double tur_keti_x(double alfa){

	return R*(double)sin(double(alfa*M_PI/180));
}
double tur_keti_y(double alfa){

	return R*(double)cos(double(alfa*M_PI/180));
}
int main()
{

	std::cout << "Qani masi bazhanem?";
	int maseri_qanak=0;
	std::cin >> maseri_qanak;

	if(maseri_qanak < 1 ) {
		return 0;
	}

	double shrjani_makeres=M_PI * R * R;
	double maseri_makeres=shrjani_makeres/maseri_qanak;
	std::cout <<"Torti makeresy:"<<shrjani_makeres<<std::endl;
	std::cout <<"Maseri makeresy:"<<maseri_makeres<<std::endl<<std::endl;
	
	double alfa=0;
	double s=maseri_makeres;
	double stacvox_makeres=0;
	double naxord_makeres=0;
	int j=0;
	for(j=0;j<maseri_qanak-1;++j){

		alfa=gtir_segmenti_ankyun(alfa,s);
		stacvox_makeres=segmenti_makeres(alfa);

		double point_x=OX-tur_keti_x(alfa/2);
		double point_y=OY+tur_keti_y(alfa/2);

		std::cout<<"Segment "<< j <<"-i makeresy:"<<stacvox_makeres-naxord_makeres<<std::endl
				<<"alfa="<<alfa<<std::endl
				<<"X1="<<ceil(point_x)<<std::endl
				<<"Y1="<<ceil(point_y)<<std::endl
				<<"X2="<<ceil(point_x+2*R)<<std::endl
				<<"Y2="<<ceil(point_y)<<std::endl
				<<"-----------------------"<<std::endl;
		s+=maseri_makeres;
		naxord_makeres=stacvox_makeres;
	
	}

	std::cout<<std::endl<<"Mnacacn el Segment "<<j<<"-in:"<<shrjani_makeres-stacvox_makeres<<std::endl;

	return 0;

}