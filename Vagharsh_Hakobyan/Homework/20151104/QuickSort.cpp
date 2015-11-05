#include <iostream>
 
void QuickSort(int a[], int left, int right)
{
  int i = left, j = right;
  int tmp;
  int middle = a[(left + right) / 2];
  while (i <= j)
    {
      while (a[i] < middle)
	{
	  i++;
	}
      while (a[j] > middle)
	{
	  j--;
	}
      if (i <= j)
	{
	  tmp = a[i];
	  a[i] = a[j];
	  a[j] = tmp;
	  i++;
	  j--;
	}
    }
  if (left < j)
    {
      QuickSort(a, left, j);
    }
  if (i < right)
    {
      QuickSort(a, i, right);
    }
}

void Print(int a[], int n)
{
  for (int i = 0; i <n; i++)
    {
      std::cout << a[i] << "; ";
    }
  std::cout << std::endl;
}

int main ()
{
  int n;
  int i;
  std::cout<<"Ներմուծել a զանգվածի չափսը՝ n= ";
  std::cin>> n;
  int a[n];
  for (i=0;i<n;i++)
    {
      std::cout << "ներմուծել a[" << i+1 << "]= ";
      std::cin >>  a[i];
    }
  Print(a,n);
  QuickSort(a, 0, n-1);
  Print(a,n);
 
}
