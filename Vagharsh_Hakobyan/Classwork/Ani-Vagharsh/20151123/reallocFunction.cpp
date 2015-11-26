//realloc function
#include <iostream>
#include <cstdlib>

void* realloc_my(void* ptr, size_t m)
{
  void* ptr2;
  if(ptr == NULL)
  {
   return malloc(m);
  }
  if(m==0)
  {
   free(ptr);
   return NULL;
  }
  else
  {
   ptr2=(char*)malloc(m);
   for (size_t i=0; i<=m*sizeof(size_t); ++i)
   {
    *(char*)(ptr2+i)=*(char*)(ptr+i);
   }
  }
  free(ptr);
  return ptr2;
}


int main()
{	
  std::cout << "Input count of int numbers n= ";
  int n;
  std::cin >> n;
  int* ptr1 = (int*)malloc(sizeof(int) * n);
  for (int i = 0; i < n; ++i)
    {
      std::cin >> ptr1[i];
    }

  for (int i = 0; i < n; ++i)
    {
      std::cout << ptr1[i] <<" ";
    }
  std::cout << std::endl;
  std::cout << "Input new count of int numbers m= ";
  int m;
  std::cin >> m;
  int* ptr2 =(int*) realloc_my(ptr1,m);
  int i = 0;
  while(i < m)
    {
      std::cout << ptr2[i] << " ";
      ++i;
    }
  std::cout << std::endl;
  free(ptr2);
  return 0;
}
