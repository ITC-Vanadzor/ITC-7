// The programm is about determinig the double Factorial of N
# include <iostream>

int Factorial(const int& n){
  	if(n==2||n==1){
		 return n;
               }
        else{
           
              return n*Factorial(n-2);
         }
}

int main()
	{
		int N=-1;
	   do{  std::cout<<"\nEnter N=\t";
                std::cin>>N;
             }  while(N<=0);

          int factorial=Factorial(N);
          std::cout<<"The  double Factorial of number the will be\t"<<factorial<<std::endl;
          return 0;
        }


