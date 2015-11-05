#include <iostream>

void Quicksort(int array[], int first, int last) 
{
    int n = first;
    for(int i = first + 1; i <= last; ++i)
    {
        if(array[i] <= array[first])
        {
	     n++;
            std::swap(array[i], array[n]);
        }
    }
    std::swap(array[n], array[first]);
    if(first < last)
    {
        Quicksort(array, first, last - 1);
        Quicksort(array, first + 1, last);
    }
}


int main()
{
    int N;
    std::cout << "N = ";
    std::cin >> N;
    if (N > 0) 
    {
        int array[N];

        for(int i = 0; i < N; ++i)
        {
            std::cout << "array[" << i << "]= ";
            std::cin >> array[i];
        }

        Quicksort(array, 0, N-1);

        std::cout << "\nSortid array" << std::endl; 
        for(int i = 0; i < N; ++i)
        {
            std::cout << "array[" << i << "] = " << array[i] << std::endl;
        }
    }
    else
    {
        std::cout << "---Error---" << std::endl;
    }
    return 0;
}

