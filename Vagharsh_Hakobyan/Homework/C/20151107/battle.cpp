#include <iostream>

int right_neighbor(int** arr, int i, int j, int size)
{
  for (int k=j; k<size; ++k)
  {
      if (arr[i][k]==0 || k==(size-1))
         {
            return k;
         }
  }
}

bool up_neighbor(int** arr, int i, int j)
{
  if (i==0 || arr[i-1][j]==0)
     {
         return true;
     }
  return false;
}

int main()
{
  int field = -1;
  do
  {
    std::cout << "Please iput size of field n = ";
    std::cin >> field;
  }
  while (field < 2);

  int **a;
  a = new int *[field];
  for (int i =0; i<field; i ++)
        a[i] = new int [field];
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
          if (a[i][j]==1 && up_neighbor(a, i, j))
          {
             j=right_neighbor(a, i, j, field);
             count=count+1;
          }
      }
  }
  std::cout << "Count of boat is equal " << count << std::endl;
  for (int i = 0; i<field; i ++)
        delete a[i];
  delete a;
  return 0;
}
