# include <iostream>
  
  
 void Winner  (const int &a, const int &b){
         if(a+b<3){
		std::cout<<"Won  the First player"<<std::endl;
	          }
	    else if(a%2==0 && b%2==0){
	 	      std::cout<<"Won  the Second player"<<std::endl;
	         }
	        else{
		       std::cout<<"Won  the First player"<<std::endl;
	            }
}


int main(){
	int B=-1;
	int A=-1;
   do{
	std::cout<<"A:";
	std::cin>>A;
	std::cout<<"B:";
	std::cin>>B;
         }while(A<0 || B<0);
    
Winner(A,B);

   
	return 0;
}

