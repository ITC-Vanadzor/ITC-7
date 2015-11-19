# include <iostream>
# include "string.h"

void CheckingPalindrome(char* Palindrome){

  int currentPalindromeNumber;
  int count=0;
    for(int i=0; i<=(strlen(Palindrome)-1)/2; ++i){
  	 if(Palindrome[i]==Palindrome[(strlen(Palindrome)-1-i)]){
  	    if(Palindrome[i]==Palindrome[0]){//  for checking the correcting of array
  	      ++count;
  	        }
  	         currentPalindromeNumber=i;
  	 }
      }
    if(currentPalindromeNumber==count-1){// checking if the array is correct
        std::cout<<"Incorrect palindrome\n";
        }
    else  if(currentPalindromeNumber==(strlen(Palindrome)-1)/2){// printing the max notPalindrome
  	  for(int i=0; i<=(strlen(Palindrome)-2); ++i){
  	   std::cout<<Palindrome[i]<<std::endl;
  	   }
      }
      std::cout<<std::endl;
}

int main()
{
char Palindrome[10000];
std::cin>>Palindrome;
CheckingPalindrome(Palindrome);
return 0;
}

