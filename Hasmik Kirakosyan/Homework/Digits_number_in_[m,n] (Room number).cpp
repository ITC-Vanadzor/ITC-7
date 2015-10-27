#include <iostream>
#include <math.h>

int main () {
    
    int n;
    std::cout<<"N= ";
    std::cin>>n;
    n/=10;
    int sum=0, i=2, k=0, last=n%10;
    n/=10;
    
    while (n>0) {
          if (n%10==0) sum=(sum+1)*10;
          else
          sum=sum+(int) n%10*i*int (pow(10,k));
          i++;
          k++;
          n/=10;
    }
    sum=sum*10+last;
    std::cout<<"\n Count of digit '0' in number is :"<<sum;
        
    char ch;
    std::cin>>ch;
    
    return 0;
}
