// The programm is about deciding the GCD of 2 numbers, which contains just ones
# include <iostream>

int GCD( const unsigned int& a,const unsigned int& b){
   if(b==0){
        return a;
      }
  else {
      return GCD(b, a%b);
      }
    }
    

 void  Number(const int &gcd){// Function prints answer

     std::cout<<"The GCD for numbers will be\t";
     for(int i=1; i<=gcd; ++i){
        std::cout<<1;
            }
       std::cout<<std::endl;
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
     int gcd=GCD(n,m);// the gcd for numbers, which will contain just ones, in real is equivalent to  number , which contains  gcd( n,m)  ones 
     std::cout<<gcd<<std::endl;
     Number(gcd);
     
  return 0;
   }

