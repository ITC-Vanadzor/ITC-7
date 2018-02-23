//realloc function
#include <iostream>
#include <cstdlib>

int* realloc_my(int* ptr, int m)
{
  int* ptr2 = (int*)malloc(sizeof(ptr) * m);
  int i =0;
  while(i < m)
    {
      ptr2[i] = ptr[i];
      ++i;
    }
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
  int* ptr2 = realloc_my(ptr1,m);
  int i = 0;
  while(i < n && i < m)
    {
      std::cout << ptr2[i] << " ";
      ++i;
    }
  std::cout << std::endl;
  free(ptr1);
  free(ptr2);
  return 0;
}
