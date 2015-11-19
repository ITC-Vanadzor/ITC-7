# include <iostream>
# include "string.h"

int main()
{
char Palindrome[10000];

std::cin>>Palindrome;
int k;
int count=0;
  for(int i=0; i<=(strlen(Palindrome)-1)/2; ++i){
  	 if(Palindrome[i]==Palindrome[(strlen(Palindrome)-1-i)]){
  	    if(Palindrome[i]==Palindrome[0]){
  	      ++count;
  	      }
  	        
  		 k=i;
  		 std::cout<<"a\n";
  	 }
   }
    if(k==count-1){
        std::cout<<"Incorrect palindrome\n";
        }
        else  if(k==(strlen(Palindrome)-1)/2){
    for(int i=0; i<=(strlen(Palindrome)-2); ++i){
     std::cout<<Palindrome[i]<<std::endl;
     std::cout<<count<<std::endl;
     std::cout<<k<<std::endl;
     }
      }
      std::cout<<std::endl;
     
return 0;
}

