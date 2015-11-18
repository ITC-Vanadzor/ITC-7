#include <iostream>

int tun(int N,int M) 
{
    if (N > M) 
    {
        return ((N-M)/2)-1;
    } 
    else 
    {
        return ((M-N)/2)-1;
    }	
}

int main() 
{
    int N;
    int M;
    std::cout << "N=" ;
    std::cin >> N;
    std::cout << "M=" ;
    std::cin >> M;
    std::cout << "Armeni u Ashoti tneri mijev gtnvum e " << tun(N,M) << " tun:" << std::endl;
    return 0;
}
