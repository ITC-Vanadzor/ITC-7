#include <iostream>
#include <cstring>

int main () {
  char a[250], buf[6], str1[6]="<--<<", str2[6]=">>-->"; 
  int count = 0, j;
  int flag;
  std::cout<<" a : ";
  std::cin>>a;

for (int i = 0; i<246; i++) {
  for (j = 0; j<6; j++)  
     {
       buf[j] = a[i+j];
     }
  for (j = 0; j<6; j++)  
     {
       if (buf[j]==str1[j]) {flag = 1;}
       else
	 {flag = 0;
	   break;}
      
     }
  if (flag==1) count++;
  for (j = 0; j<6; j++)  
     {
       if (buf[j]==str2[j]) {flag = 1;}
       else 
	 {flag = 0;
	   break;}
     }
  if (flag == 1) count++;

 }
 std::cout<<" count = "<<count;
  return 0;
}
