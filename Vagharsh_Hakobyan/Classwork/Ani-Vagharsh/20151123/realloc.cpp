//realloc function
#include <iostream>
#include <cstdlib>
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
  int* ptr2 = (int*)malloc(sizeof(int) * m);
  int i =0;
  while(i < n && i < m)
    {
	  ptr2[i] = ptr1[i];
	  std::cout << ptr2[i] << " ";
	  ++i;
    }
  std::cout << std::endl;
  free(ptr1);
  free(ptr2);
  
  return 0;
}
