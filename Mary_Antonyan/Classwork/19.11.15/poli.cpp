#include <iostream>
char poli[10];
bool Poli(char poli[])
  {
       for(int i=0; i<5; i++) 
            {
                  if(poli[i]!=poli[9-i]) return false;
             }
             return true;
}
bool  equal(char poli[])
  {
           for(int i=0; i<9; i++)
           {
                 if(poli[i]!=poli[i+1]) return false;
            }
    return true;
  }

        
int main()
{
   
     for(int i=0; i<10 ;i++)
         {
               std::cin >> poli[i];
          }
if(equal(poli))
    {           
	   std::cout << "no solution ";
		} 
    else 
     	if( Poli(poli))
         	 {
                for(int i=0;i<9;i++)
                    std::cout << poli[i];
            	}  
     else  
	 	std::cout << "polindrom che " << std::endl;
return 0;
}
