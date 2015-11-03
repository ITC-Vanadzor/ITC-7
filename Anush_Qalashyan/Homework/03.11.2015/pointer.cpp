#include <iostream>
#include <algorithm>

void Sort1(int* array[],int n)
{
    int m=n;
    do 
    {
        for(int i=0;i<m-1;i++)
        {
            if(array[i] > array[i+1])
            { 
                std::swap(array[i],array[i+1]);
            }
        }  
        m--; 
    } 
    while(m==1); 
    for(int i=0;i<n;i++)
    {
        std::cout << "&array[" << i << "]= " << array[i] << std::endl;
    }
}

int main()
{
    int n;
    std::cout << "n= ";
    std::cin >> n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        std::cout << "array[ " << i << "]= ";
        std::cin >> array[i];
    }
    int* array1[n];
    for(int i=0;i<n;i++)
    {
        array1[i]=&array[i];
    }
    Sort1(array1,n);
    std::sort(array,array + n);
    for (int i = 0; i != n; ++i)
    {
        std::cout << array[i] << "  " ;
    }

    return 0;
}

