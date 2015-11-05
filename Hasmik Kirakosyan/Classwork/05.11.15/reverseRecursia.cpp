# include <iostream>

int Rev(int number,int newNumber){
      while(number>0){
                  newNumber=newNumber*10+number%10;
                  return Rev(number/10,newNumber);
                 
                  }
                  
                  return newNumber;
                  
                  
}

int reverse(int number){
     return Rev(number, 0);
     }

                   
                     
int main()
    {    
    int Number;
    std::cout<<" Enter number\t";
    std::cin>>Number;
    
    std::cout<<"Reverse of number will be\t"<<reverse(Number)<<std::endl;
    std::cout<<"Reverse of 1025 will be\t"<<reverse(1025)<<std::endl;
    std::cout<<"Reverse of 1009 will be\t"<<reverse(1009)<<std::endl;
    
    
    
    return 0;
    }                                                
