#include <iostream>

void quicksort(unsigned int begin, unsigned int end, int a[6])
{           
 int curr, i, j;
 
  if (end>begin) {
                  curr=begin;
                  i=begin;
                  j=end;
                  
                  while (i<j) {
                        while (a[i]<=a[curr] && i<end) 
                              i++;
                        while (a[j]>a[curr])
                              j--;
                        if (i<j) {
                                 std::swap(a[i], a[j]);
                                 }
                        }
                  
                 std::swap(a[curr], a[j]);
                 quicksort(begin, j-1, a);
                 quicksort(j+1, end, a);

  }
     
}
int main () {
  int a[6]={0,3,20,1,7,0};

  std::cout<<"Not sorted array is : ";
  for (int i=0; i<6; ++i) 
      std::cout<<" "<<a[i]; 
       
  quicksort(0, 5, a);
  
  std::cout<<"\n\nSorted array is : ";  
  for (int i=0; i<6; ++i) 
      std::cout<<" "<<a[i];     
 
 char ch;
 std::cin>>ch;
 return 0;   
}
