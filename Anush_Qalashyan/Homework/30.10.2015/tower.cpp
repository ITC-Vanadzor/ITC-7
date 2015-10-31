#include <iostream>

int f(int xoranard, int mijin_arjeq) 
{
    if(xoranard > mijin_arjeq) 
    {
        return xoranard - mijin_arjeq;
    }
    else 
    {
        return 0;
    }
}


int main () {

    int N; 
    std::cout << " N = ";
    std::cin >> N;

    int h[N];
    int h_sum = 0;
    for (int  i = 0; i < N; ++i) 
    {
        std::cout << "Qani xoranard ka ashtarakum "<< "  ";
        std::cin >> h[i];
        h_sum = h_sum + h[i];
    }

    int min_xoranard_qanak = h_sum / N;
    int texapoxutyun = 0;
    for (int i = 0; i < N; ++i) 
    {
        texapoxutyun = texapoxutyun + f(h[i],min_xoranard_qanak);	
    }

    std::cout<< "Texapoxvox xoranardneri qanaky = " << texapoxutyun << std::endl;


    return 0;
}

