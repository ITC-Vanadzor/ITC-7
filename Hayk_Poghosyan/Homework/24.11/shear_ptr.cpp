#include<iostream>
int **ptr = 0;
int *count = 0;
int s = 1;
class sptr
{
	int * pp;

public:
	sptr(int *p)
	{
		pp = p;
		if (s == 1 || (ptr[s - 2]) != p)
		{

			ptr = (int**)realloc(ptr, s* sizeof(int*));
			ptr[s - 1] = p;
			count = (int*)realloc(count, sizeof(int)*s);
			count[s - 1] = 1;
			std::cout << "add  " << s << std::endl;
			std::cout << p << "	" << (ptr[s - 1]);
			++s;
		}
		else
		{
			count[s - 2]++;
			std::cout << std::endl << "+" << s;
		}


	}
	~sptr()
	{

		int i = 0;
		while (ptr[i] != pp)
		{
			++i;
		}

		std::cout << "____________\n" << count[i];
		--count[i];
		if (count[i] == 0)
		{
			delete pp;
			ptr = (int**)realloc(ptr, (s - 1)*sizeof(int*));
			count = (int*)realloc(count, (s - 1)*sizeof(int));
			--s;
			std::cout << "Delete " << std::endl;
		}

	}
};

int main()
{
	int *pointer = new int(777);
	int *pointer1 = new int(666);
	{
		sptr f(pointer);

		//sptr f1(f);
		sptr f2(pointer);
		sptr f3(pointer);
		sptr q(pointer1);
		sptr q2(pointer1);
		//sptr q1(q);
	}

	system("Pause");
	return 0;
}