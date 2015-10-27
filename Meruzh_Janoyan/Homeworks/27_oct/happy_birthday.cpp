// torty  bazhanenq N havasar maseri
// 0.1 chtutyamb bazhanum e
// tpum e i-rd masi makeresy, ev sektori kazmac ankyuny
#include <iostream>
#include <cmath>

#define R 250	//sharavix
#define M_PI       3.14159265358979323846
#define POKR_TIV 0.0001

double segmenti_makeres(double i){	
		
	double sinus_i=(double)sin(double(i*M_PI/180));
	return ((M_PI*R*R*i)/360)-(R*R*sinus_i/2);
}

double gtir_segmenti_ankyun(double maseri_makeres)
{
	double s=0;
	for(double i=0;i<360;i+=POKR_TIV){
		
		s=segmenti_makeres(i);	
		double x=abs(maseri_makeres-s);
		if (x<0.1){
			return i;
		}
	}
	return 0;
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

	for(int j=0;j<maseri_qanak;++j){

		alfa=gtir_segmenti_ankyun(s);
		stacvox_makeres=segmenti_makeres(alfa);
		std::cout<<"Segment "<< j <<"-i makeresy:"<<stacvox_makeres-naxord_makeres<<"________alfa="<<alfa<<std::endl;
		s+=maseri_makeres;
		naxord_makeres=stacvox_makeres;
	
	}

	std::cout<<std::endl<<"Tortic avelacav="<<shrjani_makeres-stacvox_makeres<<std::endl;

	return 0;

}
