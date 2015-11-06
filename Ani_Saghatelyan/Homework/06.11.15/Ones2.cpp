// The programm is about deciding the GCD of 2 numbers, which contains just ones
# include <iostream>

int GCD(unsigned int a,unsigned int b){
   if(b==0){
        return a;
      }
  else {
      return GCD(b, a%b);
      }
    }
    

 unsigned int CurrentFunction (unsigned int number,unsigned int n){
  while(number!=0){
         n=n*10+1;
      return  CurrentFunction (number-1, n);
  }
   return n;
}

 inline unsigned int Number(int number){// Function  calls the current function for 
  unsigned int n=0;
     return CurrentFunction (number, n);
     }


    int main()
 {
 unsigned int n;
  unsigned int m;
    do{
      std::cout<<"Enter n\t";
      std::cin>>n;
      std::cout<<"Enter m\t";
      std::cin>>m;
       }while(n<0|| m<0||n>2000 || m>2000);
 unsigned  int N=Number(n);
  
 unsigned  int M=Number(m);
  std::cout<<"N  "<<N<<" M "<<M<<std::endl;
       
  std::cout<<GCD(N,M)<<std::endl;
  return 0;
   }

