#include <iostream>


int main()
{
  int field = -1;
  do
  {
    std::cout << "Please iput size of field n = ";
    std::cin >> field;
  }
  while (field < 2);

  int a[field][field];
  for (int i=0;i<field;++i)
  {
      for (int j=0;j<field;++j)
      {
         std::cout << "Please input a[" << i+1 << "][" << j+1 << "]= ";
         std::cin >> a[i][j];
      }
  }
  int count=0;
  for (int i=0;i<field;++i)
  {
      for (int j=0;j<field;++j)
      {
          if (a[i][j]==1)

          {
             if (i==0 || a[i-1][j]==0)
             {
                for (int k=j; k< field; ++k)
                {
                  if (a[i][k]==0 )
                      {
                        j=k;
                      }
                }
                std::cout << i << ", " << j << std::endl;
                count=count+1;
                std::cout << "Count = " << count << std::endl;
             }
          }
      }
  }
  std::cout << "Count of boat is equal " << count << std::endl;
  return 0;
}
