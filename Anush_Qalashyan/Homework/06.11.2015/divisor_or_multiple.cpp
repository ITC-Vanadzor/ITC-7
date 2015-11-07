#include <iostream>

int bajanarar(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    if(a > b)
    {
        a = a - b;
        return bajanarar(a,b);
    }
    else
    {
        b = b - a;
        return bajanarar(a,b);
    }
}

int bazmapatik(int a, int b)
{
    if(a == b) 
    {
        return a;
    }
    else 
    {
        return a * b /bajanarar(a,b); 
    }
}


int main()
{

    std::cout << "Input 1 for divisor or 2 for multiple " << std::endl;
    int k;
    std::cin >> k;
    int a;
    int b;
    switch(k) 
    {  
        case 1: 
            {
                std::cout << "a = " ;
                std::cin >> a;
                std::cout << "b = " ;
                std::cin >> b;
                std::cout << "divisor = " << bajanarar(a,b) << std::endl; 
                break;
            }
        case 2:
            { 
                std::cout << "a = " ;
                std::cin >> a;
                std::cout << "b = " ;
                std::cin >> b;
                std::cout << "multiple = " << bazmapatik(a,b) << std::endl; 
	         break;
            }
        default:
            {
                std::cout << "Error" << std::endl;
                break;
            }                
    }     
    return 0;
}
