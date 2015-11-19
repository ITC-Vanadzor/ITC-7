// The programm determines the LCM for 2 numbers using recursia

# include <iostream>

int CurrentLCM(int a, int b, int current){// current function in order to get just two arguments in Function  LCD
   if( a%current==0  && a%b==0){
        return a;
      }
   
  else {
      return CurrentLCM(current%b+a,b,current);
      }
    }

int LCM(int A, int B){
   int currentNumber=A;
   CurrentLCM(A,B,currentNumber);  
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
       int answer= LCM(x,y);    
  std::cout<<answer<<std::endl;
  return 0;
   }
