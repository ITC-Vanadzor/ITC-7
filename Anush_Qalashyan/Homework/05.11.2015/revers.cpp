#include <iostream>

int revers(int number, int& result_out)
{
    while(number != 0)
    {
        result_out = result_out * 10 + number % 10;
        return revers(number / 10, result_out);
    }
    return result_out;
}


int REVERS(int number)
{
    int n=0;
    return revers(number,n);
}

int main()
{    
    int N;
    std::cout << "N = ";
    std::cin >> N;
    std::cout << "New N = " << REVERS(N) << std::endl;
    return 0;
}   
