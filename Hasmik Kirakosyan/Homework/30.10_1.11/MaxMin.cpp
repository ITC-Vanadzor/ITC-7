#include <iostream>
#include <conio.h>

int max_val_in_2k (int n, int numbers[]) {
    int max = numbers[1];
    for (int i = 1; i < n; i += 2) {
        max=(numbers[i]>max)? numbers[i]: max;
    }  
    return max;
}

int min_val_in_2k_1 (int n, int numbers[]) {
    int min = numbers[0];
    for (int i = 0; i < n; i+=2) {
        min=(numbers[i]<min)? numbers[i]: min;
    }  
    return min;
} 


int main () {
 int nums [10000];
 int n=0;
 std::cout<<"\n Count of numbers in file is ";
 std::cin>>n;
 
 for (int i=0; i<n; i++) {
     std::cout<<"\n Num N"<<i+1<<" is :";
     std::cin>>nums[i];
 }
 
 int max = max_val_in_2k (n, nums);
 int min = min_val_in_2k_1 (n, nums); 
 
 std::cout<<"\nMax value in pair positions is "<<max;
 std::cout<<"\nMin value in odd positions is "<<min;
 
 std::cout<<"\n\n Sum of maximum value of (2k) and minimum value of (2k+1) is "<<max+min;
 
 getch();
 return 0;  
}
