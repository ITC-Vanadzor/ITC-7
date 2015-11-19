#include <iostream>
#include <cmath>
int ErkusiAstichan(int tiv)
{
int answer=pow(2,tiv);
return answer;
}


int main()
{
int n;
std::cout << "mutqagreq bnakan tiv:   n= ";
std::cin >> n;
while(n<0)
{
std::cout << "mutqagreq bnakan tiv " << std::endl;
std::cout << "mutqagreq bnakan tiv:   n= ";
std::cin >> n;
}
int tiv=n;
int count=0;
while(tiv!=0)
{
tiv=n/2;
n=tiv;
count++;
}
int answer=ErkusiAstichan(count);
std::cout <<"tivy klini: " << answer << std::endl;
return 0;
}


