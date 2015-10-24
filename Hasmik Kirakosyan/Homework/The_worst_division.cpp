#include <iostream>
#include <conio.h>

int main (){
    int n;
    std::cout<<"\nN= ";
    std::cin>>n;
    
    int min_sum=n, i=0;
    int divisor,sum=0, worst_divisor=0;
    
    do  { //Cycle to find divisors
        i++;
        if (n%i==0) { // Is it divisor of n or not
                    sum=0;
                    divisor=n/i; //  If yes 
                    int temp=divisor;
                    while (temp>0) { // find digits in divisor
                                        sum=sum+temp%10; // sum of number digits
                                        temp/=10; 
                    }
           
                    std::cout<<"\nSum= "<<sum;
                    if (sum<=min_sum) { // Compare the last sum with current minimum sum
                             min_sum=sum;
                             worst_divisor=divisor;
                    }         
         }
    
    } while (i<=n/2);
    
    std::cout<<"\nThe worst divisor = :"<<worst_divisor<<" Minimum sum within digits sums =:"<<min_sum;
    
    getch();
    return 0;
}
