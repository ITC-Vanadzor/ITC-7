#include <iostream>
void quicksort(int *array, int left, int right)
{
    int min = (left+right)/2;
    int i = left;
    int j = right;
    int m = array[min];
	int temp;

    while( i<=j )
    {
        while(array[i]<m)
		{
			i++;
		}
        while(array[j]>m)
		{
			j--;
		}
        if(i<=j)
		{
           temp=array[i];
		   array[i]=array[j];
		   array[j]=temp;
            i++;
            j--;
        }
        else
		{
            if(left<j)
                quicksort(array, left, j);
            if(i<right)
                quicksort(array,i,right);
            return;
        }
    }
}


int main() {
    int array[100];
	int n;
	std::cout<<"greq zangvaci chap@:";
	std::cin>>n;
	for(int i=0; i<n; ++i)
	{
		std::cin>>array[i];
	}
    quicksort(array, 0, n-1);
	for(int i=0; i<n; ++i)
	{
		std::cout<<array[i]<<" ";
	}
    return 0;
}