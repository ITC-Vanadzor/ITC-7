// amenapoqr yndhanur  bazmapatik

# include <iostream>

int GCD(int a, int b){
   if(b==0){
        return a;
      }
  else {
      return GCD(b, a%b);
      }
    }
    
    int main()
 {
  int x;
  int y;
    do{
      std::cout<<"Enter x\t";
      std::cin>>x;
      std::cout<<"Enter y\t";
      std::cin>>y;
       }while(x==0|| y==0);
       int answer=  (x*y)/GCD(x,y) ;    
  std::cout<<answer<<std::endl;
  return 0;
   }