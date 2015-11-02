#include <iostream>
#include <cmath>

double Erankyan_Koxm(double x1,double y1,double x2, double y2) { 
    double koxm=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return koxm;
}

double Erankyan_Makeres(double a,double b,double c) {
    double p=(a+b+c)/2;
    double makeres=sqrt(p*(p-a)*(p-b)*(p-c));
    return makeres;
}
double Sharavix(double makeres,double a,double b, double c) {
    double R=(a*b*c)/(4*makeres);
    return R;
}
int main() {
    double x1=-1; // A keti koordinatner
    double y1=-1; 
    double x2=-1; // B keti koordinatner
    double y2=-1; 
    double x3=-1; // C keti koordinatner
    double y3=-1;
    std::cout << "mutqagreq ereq A,B,C keteri koordinatnery " << std::endl;
    std::cout <<"A keti koord-y "<< std::endl;
    std::cout << "x1= "; std::cin >> x1;
    std::cout << "y1= "; std::cin >> y1;
    std::cout <<"B keti koord-y "<< std::endl;
    std::cout << "x2= "; std::cin >> x2;
    std::cout << "y2= "; std::cin >> y2;
    std::cout <<"C keti koord-y "<< std::endl;
    std::cout << "x3= "; std::cin >> x3;
    std::cout << "y3= "; std::cin >> y3;
    double AB = Erankyan_Koxm (x1, y1, x2, y2); 
    double BC = Erankyan_Koxm (x2, y2, x3, y3);
    double AC = Erankyan_Koxm (x3, y3, x1, y1);
    double makeres = Erankyan_Makeres (AB, BC, AC);
    if	(makeres  == 0) {
	std::cout << "ketery gtnvum en mi uxxi vra,krkin porcir " << std::endl;
    }
    double ShrjanagciErkarutyun = 2 * M_PI * Sharavix(makeres, AB, BC, AC);
    std::cout << "shrjanagci erkaarutyuny klini " << ShrjanagciErkarutyun << std::endl;
    return 0;
}



