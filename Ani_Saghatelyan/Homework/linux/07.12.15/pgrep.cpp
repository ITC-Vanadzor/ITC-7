#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include <string.h>

using namespace std;

void getPid(string buff)
{
   
 ifstream processes("/proc/"); // open file to read
	  if (!processes.is_open())
	  {
		cout << "The file can't opened\n"; 
          }
	  else
	  {         string currentBuf;
      		    for(int i=1; i<32768; ++i)
		    {
                      processes >> currentBuf; //reading the first word  of file
                      if(buff==currentBuf)
                      { 
                         processes.close(); // close the file
                         std::cout<<"The PID : "<<i<<std::endl;
                         return;
                      }      
		    }
                     processes.close(); // close the file
                     std::cout<<"There isn't any proccess in that name\n";
                     return;	    
          }
	 
   }



 
int main()
{ 
    
    string buff; // buffer for writting name of process
    std::cout<<"Enter name of process : ";
    std::cin>>buff;
    std::cout<<std::endl;
    getPid(buff);
    return 0;
}
