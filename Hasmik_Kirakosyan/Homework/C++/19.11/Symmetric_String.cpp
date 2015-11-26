#include <iostream>

bool is_symmetric (char* a, int length) {
	for (int i = 0; i<(length-1)/2; i++)
  	   if (a[i] == a[length-1-i]) { }
		else {
			return false;		 
 		   }
	return true;  
}

int main () {
 char a[10];
 
 std::cout<<"a = ";
 std::cin>>a;

 int i = 0;
 while (a[i] != '\0') {
      i++;
 } 
 int length = i; 

 std::cout<<"\n"; 

 if (!is_symmetric(a, length)) std::cout<<"\nThe string isn't symmetric"<<std::endl;
  else
    if (!is_symmetric(a, length-1)) { 
   	 for (i = 0; i<length-1; i++ )
		std::cout<<a[i];
    }
    else std::cout<<"\nThere is no nonsymmetric substring";	

std::cout<<std::endl;
return 0;
}


