#include <iostream>
#include <math.h>

int main () {
    
    int n;
    std::cout<<"N= ";
    std::cin>>n;
    int temp=n;
    temp/=10;
    int sum=0, i=1, k=0; //last=temp%10;
    
    while (temp>0) {
        if (temp%10>0) sum+=sum+(int) temp%10*(int) pow(10, k); 
        else if (temp%10==0) sum+=sum+(int)n%(int)pow(10, k+1);
        k++;
        temp/=10; 
    }
    std::cout<<"\n Count of digit '0' in number is :"<<sum+1;
        
    char ch;
    std::cin>>ch;
    
    return 0;
}
