#include <iostream>
bool havasar( void* p)
{
	double* x= reinterpret_cast<double*>(p);
    return (*x==5.5);
}

bool mecpoqr(void* p)
{
	int* x= reinterpret_cast<int*>(p);
    return (*x>7);
}

bool zuyg(void*p)
{
	int* x= reinterpret_cast<int*>(p);
    return ( ((*x)%2)==0 ) ? true:false;
}

int search( void* begin, void* end, int element, bool (*compare)(void* element) )
{
	switch (element)
	{
		case sizeof (double) :
		{
			double* b = reinterpret_cast<double*>(begin);
			double* e = reinterpret_cast<double*>(end);
			int j=0;
			while(b<e)
			{
				if(compare(b))
				{
					return j;
				}
				++b;
				++j;
			}
			break;
		}
		case sizeof (int) :
		{
			int* b = reinterpret_cast<int*>(begin);
			int* e = reinterpret_cast<int*>(end);
			int j=0;
			while(b<e)
			{
				if(compare(b))
				{
					return j;
				}
				++b;
				++j;
			}
			break;
		}
		case sizeof (char) :
		{
			char* b = reinterpret_cast<char*>(begin);
			char* e = reinterpret_cast<char*>(end);
			int j=0;
			while(b<e)
			{
				if(compare(b))
				{
					return j;
				}
				++b;
				++j;
			}
			break;
		}
	}
}

int main()
{
	double array[10];
	std::cout<<"greq arajin zangvaci andamner@ double tipov:"<<std::endl;
	for(int i=0; i<10; ++i)
	{
		std::cin>>array[i];
	}
	
	int array1[10];
	std::cout<<"greq erkrord zangvaci andamner@ int tipov:"<<std::endl;
	for(int i=0; i<10; ++i)
	{
		std::cin>>array1[i];
	}
	
	int array2[10];
	std::cout<<"greq errord zangvaci andamner@ char tipov:"<<std::endl;
	for(int i=0; i<10; ++i)
	{
		std::cin>>array2[i];
	}
	
	bool (*fhavasar)(void*);
	fhavasar=havasar;
	
	bool (*fmec)(void*);
	fmec=mecpoqr;
	
	bool (*fzuyg)(void*);
	fzuyg=zuyg;
	
	std::cout<<"arajin zangvaci 5.5-in havasar arajin elementi hamarn@`  ";
	std::cout<<search(&array[0], &array[9], sizeof (array[0]), fhavasar )<<std::endl;
	
	std::cout<<"erkrord zangvaci 7-ic mec arajin elementi hamarn@`  ";
	std::cout<<search(&array1[0], &array1[9], sizeof (array1[0]), fmec )<<std::endl;
	
	std::cout<<"errord zangvaci arajin zuyg elementi hamarn@`  ";
	std::cout<<search(&array2[0], &array2[9], sizeof (array2[0]), fzuyg )<<std::endl;
	return 0;
}