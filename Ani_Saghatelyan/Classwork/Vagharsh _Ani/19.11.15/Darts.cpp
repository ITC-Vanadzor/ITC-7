# include <iostream>

void  CheckDarts( char* Darts){ 
     
      int count=0;     
     for(int i=0; i<246; ++i){
          if(Darts[i]=='>'){
            if(Darts[i+1]=='>' && Darts[i+2]=='-' && Darts[i+3]=='-' &&Darts[i+4]=='>'){
            ++count;
                 }
          } 
        if(Darts[i]=='<'){
            if(Darts[i+1]=='-' && Darts[i+2]=='-' && Darts[i+3]=='<' &&Darts[i+4]=='<'){
            ++count;
                 }
        } 
      }
          std::cout<<"the count of darts is\t"<<count<<std::endl;
}

int main()
{
  char Darts[250];
  std::cin>>Darts;
  CheckDarts(Darts);
      
          return 0;
          
      }
         
