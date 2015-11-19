#include <iostream>

int main () {
    int numOfPeople=0;
    std::cout<<"\nVazgen, please Input number of people in your birthday party :";
    std::cin>>numOfPeople;
    
    if (numOFPeople%2==0) {
                          std::cout<<"\n\nMinimum number of steps is "<<numOfPeople/2;
    }
    else {
                          std::cout<<"\n\nMinimum number of steps is "<<numOfPeople-1;   
    } 
       
    return 0;
}
