#include <iostream>
int CountOfRoom(int room,int grade)
{ 
int counts=((2*room+room*(grade-1))/2)*grade;
std::cout << counts << std::endl;
return 0;
}
int main()
{
int counts;
int grade=-1;
int room=-1;
std::cout << "grade=: ";
std::cin >> grade;
std::cout << "room=: ";
std::cin >> room;
while(grade < 3 || room < 3)
{
std::cout << "try again,please " << std::endl;
std::cout << "grade=: ";
std::cin >> grade;
std::cout << "room=: ";
std::cin >> room;
}
CountOfRoom(room,grade);
return 0;
}
