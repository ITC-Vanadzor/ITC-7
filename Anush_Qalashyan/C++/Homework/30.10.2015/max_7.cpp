#include <iostream>

int& max(int& a,int& b)
{
    return a > b ? a : b;
}

void anssign(int& a,int& b)
{
    max(a,b)=7;
}

int main()
{
    int x;
    int y;
        std::cout << "a= " ;std::cin >> x;
        std::cout << "b= ";std::cin >> y;
        anssign(x,y);
        std::cout << "a=" << x << std::endl << "b=" << y << std::endl;
        return 0;
}
        
