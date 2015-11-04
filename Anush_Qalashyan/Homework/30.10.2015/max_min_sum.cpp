#include <iostream>

int getMinMax(int* A, int size, int Min_out, int Max_out)
{
    for (int i = 0; i < size; ++i)
    {
        if(i % 2 == 0) 
        {
            Max_out = A[i];

            if (Max_out < A[i]) 
            {
                Max_out = A[i];
            }
        }
        else 
        {
            Min_out  = A[i];

            if (Min_out > A[i]) 
            {
                Min_out = A[i];
            }
        }
    } 
    return Min_out + Max_out ;
}


int main ()
{
    int size;
    std::cout << "size= " ;
    std::cin >> size;
    int A[size];

    for(int i = 0; i < size; ++i)
    {
        std::cin >> A[i];
    }

    int Min_out;
    int Max_out;
    std::cout << getMinMax(A, size, Min_out, Max_out) << std::endl;
    return 0;
}
