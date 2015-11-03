# include <iostream>


 void  PrintMembers(int& *ptr){  // prints  the numbers' array
     for(int i=0; i<10; ++i){
           std::cout<<" "<<ptr[i]<<std::endl;
            }
            std::cout<<std::endl; 
       }


 void  PrintMembers(int& **ptr){// prints the Ip's array
     for(int i=0; i<10; ++i){
           std::cout<<" "<<ptr[i]<<std::endl;
            }
            std::cout<<std::endl; 
       }

   
    void Bubble(int& *members){// sorts the numbers' array
         for(int i=9; i>=0; --i){
  	for(int j=0; j<i; ++j){
  	      if(members[j]>members[j+1]){
  	          std::swap(members[j], members[j+1]);
  	           }
  	      }
        }
      std::cout<<" The numbers  after sorting\n";
      PrintMembers(members);
}

  void Bubble(int& **members){//sorts the IPs' array
         for(int i=9; i>=0; --i){
  	for(int j=0; j<i; ++j){
  	      if(members[j]>members[j+1]){
  	          std::swap(members[j], members[j+1]);
  	           }
  	      }
        }
     std::cout<<"  The IPS  after sorting\n";
     PrintMembers(members);
}
     
   


int main()
   {

 int * IPs[10]={};//array for IPS
 int Numbers[10]={};//array for numbers
    for(int i=0, j=9; i<10; ++i, --j){
      
    	  std::cout<<"\nEnter the "<<i<<"-th  member  ";
	  std::cin>>Numbers[i];
    	  IPs[j]=&Numbers[i];//the last member of the IPs' array gets first number's Ip 
     	 }
         
  std::cout<<" The numbers  before sorting\n";
  PrintMembers(Numbers); //prints number's array before sorting          
  Bubble(Numbers);//sorts numbers' array
  std::cout<<"  The IPS  before sorting\n";
  PrintMembers(IPs); //prints IP's array before sorting 
  Bubble(IPs);  //sorts IPS'array    
            
     
  return 0;
}
  
