#include <iostream>
#include <cmath>
double Erankyan_Koxm(double x1,double y1,double x2, double y2)
{ 
    double koxm=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return koxm;
}

double Erankyan_Makeres(double a,double b,double c)
{
    double p=(a+b+c)/2;
    double makeres=sqrt(p*(p-a)*(p-b)*(p-c));
    return makeres;
}
double Sharavix(double makeres,double a,double b, double c)
{
    double R=(a*b*c)/(4*makeres);
    return R;
}
int main()
{
    double x1,y1,x2,y2,x3,y3; 
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
    double a=Erankyan_Koxm(x1,y1,x2,y2); 
    double b=Erankyan_Koxm(x2,y2,x3,y3); 
    double c=Erankyan_Koxm(x3,y3,x1,y1); 
    double makeres=Erankyan_Makeres(a,b,c);
    if(makeres==0)
    { 
        std::cout << "ketery gtnvum en mi uxxi vra " << std::endl;
    }
    double sharavix=Sharavix(makeres,a,b,c);
    double shrj_erk=2*M_PI*sharavix;
    std::cout << "shrjanagci erkaarutyuny klini " << shrj_erk << std::endl;
    return 0;
}



