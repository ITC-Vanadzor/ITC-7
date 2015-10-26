#include <iostream>

int main (){
    int n;
    std::cout<<"\nN= ";
    std::cin>>n;
    
    int min_sum=n, i=0;
    int divisor,sum=0, worst_divisor=0, choice;
    
    std::cout<<"Choose \n 1 ---> The best divisor  \n 2 ---> The worst divisor";
    std::cin>>choice;
    
if (choice==2) {
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
}
else  {
      int best_divisor=0, max_sum=0;
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
                    if (sum>=max_sum) { // Compare the last sum with current minimum sum
                             max_sum=sum;
                             best_divisor=divisor;
                    }         
         }
    
    } while (i<=n/2);  
    
    std::cout<<"\nThe best divisor = :"<<best_divisor<<" Maximum sum within digits sums =:"<<max_sum;
    
}
    
    char ch;
    std::cin>>ch;
    return 0;
}
