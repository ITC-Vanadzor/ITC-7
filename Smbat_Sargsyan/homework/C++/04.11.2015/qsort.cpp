#include <iostream>
int a[100];
void QSORT(int left, int right)
{
    int middle = a[left + (right - left) / 2];
    int i = left;
    int j = right;
    while(i <= j)
    {
        while(a[i] < middle) i++;
        while(a[j] > middle) j--;
        if(i <= j)
        {
            std::swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i<right)
                QSORT(i, right);
   
    if (left<j)   
        QSORT(left, j);    
}
int main()
{
    int n;
    do 
     {
       std::cout << "n=";
       std::cin >> n;
     } while(n<=0);
    for(int i = 0; i < n; i++)
    {
        std::cout << "a[" << i << "]=";
        std::cin>>a[i];
    }
    QSORT(0, n-1);
    for(int i = 0; i < n; i++)
    {
        std::cout <<a[i]<<" ";
    }
    std::cout << std::endl;        
    return 0;
}
