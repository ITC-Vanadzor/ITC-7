#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void Sort(int*, int);
void Swap(int*, int*);
int main()
{
  int n;
  do
  {
   cout << "n= ";
   cin >> n;
  } while(n<0);
  int arr[n];
  for(int i=0;i<n;i++)
   {
     cout << "arr[ " << i << "]= ";
     cin >> arr[i];
   } 
  Sort(arr, n);
  for(int j = 0; j < n; j++)
  cout << arr[j] << " ";
  cout << endl;
  for(int j = 0; j < n; j++) 
  cout << &arr[j] << " " << endl;
  return 0;
}
void Sort(int* ptr, int n)
{
  for(int j = 0; j < n - 1; j++)
  for(int k = j + 1; k < n; k++)
  Swap(ptr + j, ptr + k);
}
void Swap(int* numb1, int* numb2) 
{
  if(*numb1 > *numb2) 
  {
    int temp = *numb1;
    *numb1= *numb2;
    *numb2= temp;
  }
}
