#include <iostream>

int kent_min(int A[], int N)
{
    int  min = A[0]; 

    for (int i = 1; i < N; i = i + 2)
    {


        if (min > A[i]) 
        {
            min = A[i];
        }
    }
    return min;
}

int zuyg_max(int A[], int N)
{
    int max = A[1]; 
    for (int i = 0; i < N; i = i + 2)
    {

        if (max < A[i]) 
        {
            max = A[i];
        }
    }
    return max;
}

int main ()
{
    int N;
    std::cout << "N= " ;
    std::cin >> N;
    int A[N];

    for(int i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }

    std::cout << kent_min(A,N) + zuyg_max(A,N) << std::endl;
    return 0;
}
