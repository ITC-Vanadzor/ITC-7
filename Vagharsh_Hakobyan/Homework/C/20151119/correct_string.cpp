#include <iostream>
//#include <string>

 int main()
{
 char str1[100];
 char str2[100];
 std::cin >> str1;
 for(int i=0;i<sizeof(str2);++i)
 {
  str2[i]=0;
 }
 int j=0;
 for(int i=0;i<sizeof(str1);++i)
 {
  if (str1[i] == 34)
  {
   str2[j]=34;
   j=j+1;
  }
  if (str1[i] == 39)
  {
   str2[j]=34;
   j=j+1;
  }
  if (str1[i] == 34)
  {
   str2[j]=34;
   j=j+1;
  }
   if (str1[i] == 34)
  {
   str2[j]=34;
   j=j+1;
  }
   if (str1[i] == 34)
  {
   str2[j]=34;
   j=j+1;
  }
 }
 std::cout << sizeof(str2) << std::endl;
 std::cout << str2 << std::endl;
 return 0;
}

// {asdasdasd()asdasdasdasd[]asdasdasdasd"asdasd"asdasdasd'asdasdasdsa'asd}
