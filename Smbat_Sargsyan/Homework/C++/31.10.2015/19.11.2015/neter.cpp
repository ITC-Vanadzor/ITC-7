#include <iostream>
int main()
{
    char net[10];
    int count=0;
    for(int i=0; i < 10; i++)  
      {
            std::cin >> net[i];
       }
    for(int i=0; i < 10; i++)  
          {
                  if((net[i]== '>' && net[i+1]=='>' && net[i+2]=='-' &&  net[i+3]=='-' && net[i+4]=='>') || (net[i]== '<' && net[i+1]=='-' && net[i+2]=='-' &&  net[i+3]=='<' && net[i+4]=='<'))
                             count++;
          }
  std::cout << "count= " << count << std::endl;
return 0;
}
