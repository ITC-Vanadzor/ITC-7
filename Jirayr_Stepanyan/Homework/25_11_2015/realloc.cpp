#include <iostream>
#include <cstdlib>
void* realloc2(void* old_arr, int new_size)
{
	int* new_arr;
	if(new_size > 4 * sizeof(int))
	{
		new_arr = (int*)malloc (new_size);
		for(int i = 0; i < 4; ++i)
		{
			*((int*)new_arr+i) = *((int*)old_arr+i);
		}
	
	free(old_arr);
        }
	return new_arr;
}
int main()
{

	int* x = (int*)malloc (4 * sizeof(int));
	for (int i=0; i<4; ++i)
	{
		x[i] = i + 1;
	}
	for(int i = 0; i < 4; ++i)
	{
	std::cout << "x["<< i << "]= "<< x[i] << std::endl;
        }
	int* y = (int*)realloc2(x, 5 * sizeof(int));
	y[4] = 9;
	for(int i = 0; i < 5; ++i)
        {
	std::cout << "y[" << i << "]= " <<  y[i] << std::endl;
        }
	free(y);

   return 0;
}
