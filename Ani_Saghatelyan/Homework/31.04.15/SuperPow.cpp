// the programm is determining  the mod of  superpow of 2 (SP=2^2^n ) and m ``( SP mod m)
# include <iostream>
# include <climits>
# include <cmath>
  unsigned  int Power( unsigned   int n){

   n=1<<n;
        return n;
   }

 void Mod(int n, int m){ 
      int  balance=n%  ((int)sqrt(log2(UINT_MAX))-1);//  decides the balance from n divide  parts  
      int  parts=n/ ((int) sqrt(log2(UINT_MAX))-1);//  decides the count of parts n
      int mod=1;
                  for(int i=1; i<=parts; i++){
           		 mod*=(Power(Power(sqrt(log2(USHRT_MAX))))%m);
			}
         mod*=(Power(Power(balance))%m);
         mod%=m;
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
    
      
       

return 0;
}
    
  
    
