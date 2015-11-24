#include <iostream>
using std::cout;
using std::endl;
using std::cin;

struct Gumar
{
int a;
float b;

Gumar() : a(0), b(0.0)                         // default kanstruktor (a ev b-i inicalizacia)
{ }
Gumar(int a1, float b1) : a(a1), b(b1)         // kanstruktor stanum e parametrner 
{ }
void get()                                     // uxxaki nermucman funkcia
{
cout << "\n:nermuceq arajin tivy "; cin >> a;
cout << "nermuceq erkrord tivy"; cin >> b ;

}
void show()                                    // cuyc e talis stacvac arjeqy
{ cout << a << " + " << b; }
Gumar operator+(Gumar) const;
~Gumar();                                      // destruktor
};

Gumar Gumar::operator+(Gumar A) const          // gumarman operatori funkcian
{
int a1 = a + A.a;
float b1 = b + A.b; 
return Gumar(a1, b1);
}

int main()
{
Gumar Sum1, Sum3, Sum4; 
Sum1.get();
Gumar Sum2(11, 6.25); 
Sum3 = Sum1 + Sum2; 
Sum4 = Sum1 + Sum2 + Sum3; 

cout << "Sum1= "; Sum1.show(); cout << endl;
cout << "dist2= "; Sum2.show(); cout << endl;
cout << "dist3= "; Sum3.show(); cout << endl;
cout << "dist4= "; Sum4.show(); cout << endl;
return 0;
}


