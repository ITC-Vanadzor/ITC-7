#include <iostream>
int Max(int a,int b)
{
if(a>b) { return a; }
else    { return b; }
}
int main()
{
int LeftHouse,RightHouse;
do
{
std::cout << "LeftHouse= ";std::cin >> LeftHouse;
std::cout << "RightHouse= ";std::cin >> RightHouse;
} while(LeftHouse < 0 || LeftHouse >=100 || RightHouse < 0 || RightHouse >=100);
int answer= Max(LeftHouse,RightHouse)-((LeftHouse+RightHouse)/2+1);
std::cout << "Between Armen's and Ashot's houses will be " << answer << " house" << std::endl;
return 0;
}
