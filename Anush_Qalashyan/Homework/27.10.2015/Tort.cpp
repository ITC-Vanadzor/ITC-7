
#include <iostream>

int main () {
    int N=0;
    std::cout<<"Hyureri qanaky= ";
    std::cin>> N;
    
    if (N % 2 == 0) {
                          std::cout<< "Ktrvacqneri minimum qanaky tramagcov " << "-> "<< N/2 << std::endl;
    }
    else {
                          std::cout<< "Ktrvacqneri minimum qanaky sharavxov " << "-> "<< N-1 << std::endl;   
    } 
       
    return 0;
}
