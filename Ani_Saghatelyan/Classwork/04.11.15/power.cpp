#include <iostream>

int function_pow (int n, int m) { 
  if (m==0 ) 
  { 
   return 1; 
   }
    else if (m%2==0){
     
      return function_pow(n,m/2)*function_pow(n, m/2);
      }
	else {
		return n*function_pow(n,m/2)*function_pow(n,m/2);
	    }	
}

int main () {

int n;
std::cout<<" n = ";
std::cin>>n;
int m;
std::cout<<" m = ";
std::cin>>m;

std::cout<<" "<<function_pow(n, m)<<std::endl;


return 0;
}
