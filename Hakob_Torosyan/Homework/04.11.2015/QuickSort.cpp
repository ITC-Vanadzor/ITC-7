#include <iostream>

void swapp (int &, int &);
void quickSort(int *, int, int);

int main()
{	
	int size = 10;
	std::cout << "Please import size " << std::endl;
	std::cin >> size;
	int *array = new int[size];
	std::cout << "Please import members of array " << std::endl; 
    	for(int i = 0; i < size; ++i)
    	{	
       	 	std::cin>>array[i];
    	}
    	quickSort(array, 0, size-1);
    	for(int i = 0; i < size; i++)
    	{
        std::cout<<array[i]<<" ";
    	}  
    	delete[] array;
    return 0;
}

void quickSort(int *array, int l, int r)
{
    	int middle = array[l + (r - l) / 2];
    	int i = l;
   	 int j = r;
    while(i <= j)
    {
        while(array[i] < middle) 
		{
			i++;
		}
        while(array[j] > middle) 
		{
			j--;
		} 
       if(i <= j)
       	{
            swapp(array[i], array[j]);
            i++;
            j--;
        }
    }
 	if (i<r)
                {
		quickSort(array, i, r);
 		}  
   	 if (l<j)
		{   
        	quickSort(array, l, j); 
		}   
}

void swapp(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
