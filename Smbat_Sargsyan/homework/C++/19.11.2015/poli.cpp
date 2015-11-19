#include <iostream>
char poli[10];
bool Poli(char poli[])
  {
       int count=0;
       for(int i=0;i<6;i++) 
            {
                  if(poli[i]!=poli[10-i]) 
                      count++;
             }
       if(count==0)
             return true;
}
bool  equal(char poli[])
  {
           int count=0;
           for(int i=0;i<9;i++)
           {
                 if(poli[i]==poli[i+1]) 
                     count++;
            }
           if(count==10)
              return true;
  }

        
int main()
{
   
     for(int i=0;i < 10;i++)
         {
               std::cin >> poli[i];
         }
      
     if(equal(poli))
                    std::cout << "no solution ";
          
     else  if(Poli(poli))
               {
                     for(int i=0;i<9;i++)
                        std::cout << poli[i];
               } 
     else  std::cout << "politron che " << std::endl;
     return 0;
}
