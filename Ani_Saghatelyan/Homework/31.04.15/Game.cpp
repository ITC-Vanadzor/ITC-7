//The program determines who will win playing the game about nuts
# include<iostream>

static int A;
static int B;

  int Sum(){
	int sum=A+B;
	return sum;
	}

  
       
            

  int Game(){
            int SUM=Sum();

          	if(Sum()%2==0){   
 	       		 SUM-=1;  
			std::cout<<"I took 1 nut\n";
                      }
   		else {
                    std::cout<<"I changed nuts\n";
	         	 }
       
		
           while(SUM>=3){
               int yourChoice;
                do{
              std::cout<<"Enter your decision..press '0' for changing nuts    '1' for  taking one nut  and   '2' for taking 2 nuts\n";
              std::cin>>yourChoice;
                  }while(yourChoice<0 || yourChoice>3);
              
 
             	 switch(yourChoice){
                    
                    case 0: std::cout<<"You changed the nuts\n";
                            if(SUM==3){
                                std::cout<<"I changed the nuts\n";
                                }
                              else{
                                std::cout<<"I took 2 nuts\n";
                                  }
                            break;
                    case 1: std::cout<<"You took 1 nut\n";
                              if(SUM==3){
                                  std::cout<<"I took 2 nut\n" ;
                                  SUM-=1;
                                    }
                             else {
                                   std::cout<<"I took 1 nut\n";
                                 }
                            break;
                    case 2: std::cout<<"You took 2 nuts\n";
                             if(SUM==3){
                                  std::cout<<"I took 1 nut\n";  
                                  SUM-=1;
                                  }
                              else {
                                std::cout<<"I changed the nuts\n";
                                   }  
                           break; 
                       }
                      SUM-=2;
                  }
             return SUM;
            } 

int main()
{


do{
    std::cout<<"Enter A\n";
    std::cin>>A;
    std::cout<<"Enter B\n";
    std::cin>>B;
         }while(A<=0 || B<=0 || A>109 || B>109);
   
   int sum=Game();
   
         if(sum==0){
                    std::cout<<"You are woned..Try again\n";
                      }
                    else {
                         std::cout<<"You won!! Congratulations\n";
                           }

return 0;
}
   

    
