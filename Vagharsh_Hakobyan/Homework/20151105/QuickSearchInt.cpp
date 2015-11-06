#include <iostream>



int _search (int* intArr, int begin, int end, int element)
{
    int i = begin; int j = end;
    int middle=(i+j)/2;
    if (intArr[middle] == element)
       {
         return middle;
       }
    if (intArr[middle] > element)
       {
         _search(intArr,i,middle,element);
       }
    if (intArr[middle] < element)
       {
         _search(intArr,middle,j,element);
       }
    return -1;
}

int search (int* intArr, int n, int element)
{
    _search(intArr,0,n,element);
}

int main () {
    int n = -1;
    do
    {
        std::cout << "Ներմուծել զանգվածի չափսը՝ n = " ;
        std::cin >> n;
    }
    while (n<=1);
    int intArr [n];
    for (int i=0; i<n;++i)
    {
        std::cout << "Ներմուծել intArr[" << i+1 << "]= ";
        std::cin >> intArr [i];
    }
    //std::endl;
    std::cout << "Ներմուծել որոնվող արժեքը" ;
    int k;
    std::cin >> k;
    //std::endl;
    std::cout << "Ներմուծել արժեքի ինդեքսն է՝ ";
    return search(intArr,n,k);
}