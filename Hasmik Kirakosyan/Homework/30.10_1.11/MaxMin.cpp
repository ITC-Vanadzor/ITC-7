#include <iostream>
#include <conio.h>

int get_sum_max_min (const int& n, int nums[],int& max_out, int& min_out) {  
    max_out = nums[0];
    min_out = nums[0];
    for (int i = 0; i < n; ++i) {
        if (i%2==0) {
             min_out = (nums[i]<min_out)? nums[i]: min_out;
             }
        else {
             max_out=(nums[i]>max_out)? nums[i]: max_out;
             }
    } 
   return max_out+min_out; 
} 

int main () {
 int n=0;
 std::cout<<"\n Count of numbers in file is ";
 std::cin>>n;
 int nums[n];
 
 for (int i=0; i<n; i++) {
     std::cout<<"\n Num N"<<i+1<<" is :";
     std::cin>>nums[i];
 }
 int max_out, min_out;
 
 std::cout<<"\n\n Sum of maximum value of (2k) and minimum value of (2k+1) is "<<get_sum_max_min(n, nums, max_out, min_out);
 
 getch();
 return 0;  
}


