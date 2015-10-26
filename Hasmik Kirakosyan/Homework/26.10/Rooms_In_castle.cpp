// C++ program of Castle problem
#include <iostream>

int main () {
    int floor, numberOfSides;
    
    std::cout<<"\nNumber of sides of castle (polygonal) is :";
    std::cin>>numberOfSides;
    
    std::cout<<"\nNumber of floors in castle is :";
    std::cin>>floor;
    
    int roomsNum=0;
    for (int i=1; i<=floor; i++) {
        roomsNum+=i*numberOfSides;
    }
    
   std::cout<<"\n\nThere are "<<roomsNum<<" rooms in the castle, which has "<<floor<<" floors and "<<numberOfSides<< " sides.";  
    
    char ch;
    std::cin>>ch;
    return 0;
}

