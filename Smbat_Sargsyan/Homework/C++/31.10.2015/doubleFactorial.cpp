#include <iostream>
void factorial(int n) {
int answer=1;
if(n%2==0)  {
for(int i=2;i<=n;i=i+2) { 
     answer=answer*i;   }
            }
else {
for(int i=1;i<=n;i=i+2) {
     answer=answer*i;   }
     }
                     }
int main()
{
int n;
do
{
std::cout << "n= ";
std::cin >> n;
} while(n<0);
int answer=factorial(n);
std::cout << answer << std::endl;
return 0;
}
