# include <iostream>

int main()
{
  char Darts[250];
  int count=0;
  
  std::cin>>Darts;
      
       
       for(int i=0; i<246; ++i){
          if(Darts[i]=='>'){
          std::cout<<"a\n";
            if(Darts[i+1]=='>' && Darts[i+2]=='-' && Darts[i+3]=='-' &&Darts[i+4]=='>'){
            ++count;
            
            }
           } 
          if(Darts[i]=='<'){
          std::cout<<"b\n";
            if(Darts[i+1]=='-' && Darts[i+2]=='-' && Darts[i+3]=='<' &&Darts[i+4]=='<'){
            ++count;
            std::cout<<i<<std::endl;
            
            }
           } 
          }
          std::cout<<"the count of darts is\t"<<count<<std::endl;
          

          return 0;
          
      }
         
