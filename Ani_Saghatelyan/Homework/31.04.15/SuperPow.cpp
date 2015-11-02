// the programm is determining  the mod of  superpow of 2 (SP=2^2^n ) and m ``( SP mod m)
# include <iostream>
# include <climits>
# include <cmath>
  unsigned  int Power( const unsigned   int& n){
    unsigned int powerOfTwo=n;

      powerOfTwo=1<<powerOfTwo;
;
        return powerOfTwo;
   }

 void Mod(const int& n,const  int& m){ 
    unsigned int mod=0;

    if(n<(int)log2(log2(UINT_MAX))){
            mod=Power(Power(n))%m;
                }
           else{
       
      		int  balance=n%  ((int)log2(log2(UINT_MAX)));//  decides the balance from n divide  parts  
      		int  parts=n/((int) log2(log2(UINT_MAX)));//  decides the count of parts n              
       	        mod=(Power(Power(parts))%m)*(Power(Power(balance))%m);
         	mod%=m;
         	
               }
       std::cout<<"The  SP%M will be\t "<<mod<<std::endl;
      }


int main()
{
 unsigned  int N;
 unsigned  int M;
  do{
     std::cout<<"\nEnter  N (N>=0)\t";
     std::cin>>N;
     std::cout<<"\nEnter  M  (M>=2)\t";
     std::cin>>M;
   }   while(N<0 || M<=1);
     
    
     Mod(N,M);   

return 0;
}
    
  
    
