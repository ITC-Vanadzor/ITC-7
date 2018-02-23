// 
//least common multiple

# include <iostream>

int LCM(int a, int b){
   static int temp = a;
   
   if((a%temp == 0) && (a%b == 0))
                {
                return a;
                }
   else {
                return LCM(temp%b + a, b);
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
        
       }  while((x==0) || (y==0));
       
  std::cout<<LCM(x,y)<<std::endl;
  
 
  return 0;
   }
