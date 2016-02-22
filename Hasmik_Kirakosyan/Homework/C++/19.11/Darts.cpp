#include <iostream>


int main () {
  char a[250], buf[6], str1[6]="<--<<", str2[6]=">>-->"; 
  int count = 0, j;
  bool flag;
  std::cout<<" a : ";
  std::cin>>a;

for (int i = 0; i<245; i++) {
        // set buffer char array composed by 5 chars from a array
  	for (j = 0; j<5; j++)  
     		{
      		 buf[j] = a[i+j];
     		}
	// check whether buffer array is a dart or not
  	for (j = 0; j<5; j++)  
     		{
       		 if (buf[j]==str1[j]) flag = true;
     		 else	 		
		     {
		       flag = false;
                       break;
	             }      
        }

  	if (flag) count++; 
  	else {
  	 for (j = 0; j<5; j++)  
     		{
       		  if (buf[j]==str2[j]) flag = true;
       		  else 
	 	      {
			flag = false;           
          		break;
                      }
       }

       if (flag) count++;

   }
}

 std::cout<<" count = "<<count<<std::endl;
 return 0;
}
