#include <iostream>

int qayleri_qanak (int n) 
{

    if (n!=1 && n!=0) 
    {
        return qayleri_qanak(n-1)+qayleri_qanak(n-2);
    }
    else 
    {
        return 1;
    }
}

int main () 
{

    int n=0;
    std::cout << "N = ";
    std::cin >> n;
    std::cout<< "Qayleri qanaky = " << qayleri_qanak(n) << std::endl;

    return 0;
}
