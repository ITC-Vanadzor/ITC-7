#include<iostream>
#include<string>


void sort(std::string* arr, int size)
{
	std::string tmp;

	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int gumar(int x)
{
	int tmp=0;
	for (int i = 1; i < x ; ++i)
	{
		tmp += i;
	}
	return tmp;
}

int main()
{
	int x = 10;
	int zuyger = 9;
	int*a = new int[zuyger];
	int*b = new int[zuyger];
	std::string*t = new std::string[zuyger];
	bool*trfl = new bool[zuyger];
	/*for (int i = 0; i < zuyger; ++i)
	{
	do {
	std::cin >> t[i];

	} while (t[i][0] - 48>x || t[i][0] - 48 <= 0 || t[i][1] - 48>x || t[i][1] - 48 <=0 || t[i][0]>=t[i][1]);
	}*/
	//////////////////
	t[0] = "13";
	t[1] = "15";
	t[2] = "35";
	t[3] = "45";
	t[4] = "34";
	t[5] = "14";
	t[6] = "78";
	t[7] = "79";
	t[8] = "89";
	//t[9] = "16";
	//t[10] = "17";
	////////////////


	sort(t, zuyger);
	for (int i = 0; i < zuyger; ++i)
	{
		trfl[i] = false;
		a[i] = (t[i][0] - 48);
		b[i] = (t[i][1] - 48);
		//std::cout << "(" << a[i] << "," << b[i] << ')' << std::endl;
		//std::cout << t[i] << std::endl;
	}
	int c = 0;
	while (c<zuyger)
	{
		
		//zuyger -= pop;

		std::string*stack = new std::string[zuyger];
		int j = 0;
		for (int i = c; i < zuyger; ++i)
		{
			if (t[c][0] == t[i][0] && trfl[i]==false)
			{
				stack[j] = t[i];
				++j;
			}
		}
		//std::cout << std::endl;
		for (int i = 0; i <= j; ++i)
		{
			//std::cout << stack[i] << std::endl;
		}
		std::string*stack2 = new std::string[j];

		for (int i = 0; i < j; ++i)
		{
			stack2[i] = stack[i][1];
			//std::cout << stack2[i] << std::endl;
		}

		std::string*stack3 = new std::string[gumar(j)];

		int l = 0;
		for (int p = 0; p < j - 1; ++p)
		{
			for (int k = p + 1; k < j; ++k, ++l)
			{
				stack3[l] = stack2[p] + stack2[k];
				//std::cout << stack3[l] << std::endl;
			}
		}
		char sxal = '#';
		bool flag = false;
		for (int i = 0; i < gumar(j); ++i)
		{
			for (int n = 1; n < zuyger; ++n)
			{
				if (stack3[i] == t[n] )
					flag = true;
			}
			if (!flag)
			{
				//std::cout <<'	' <<stack3[i];
				sxal = stack3[i][1];
				//stack3[i].erase();

				//std::cout << '	'<<stack3[i];
			}
			flag = false;
		}

		for (int i = 0; i <gumar(j) ; ++i)
		{
			if (stack3[i][0] == sxal || stack3[i][1] == sxal)
			{
				//std::cout <<"|" <<stack3[i]<<"	";
				stack3[i].erase();
			}
			else {
				std::cout << std::endl << stack3[i];
				for (int p = 0; p < zuyger; ++p)
				{
					if (t[p][0] == stack3[i][0] && t[p][1] == stack3[i][1])
					trfl[p] = true;


				}
			}

		}
		for (int i = 0; i < j; ++i)
		{
			if (stack[i][0] == sxal || stack[i][1] == sxal)
			{
				//std::cout << "ww" << stack[i] << "	";
				stack[i].erase();
			}
			else {
				std::cout << std::endl << stack[i];
				{
					for (int p = 0; p < zuyger; ++p)
					{
						if (t[p][0] == stack[i][0] && t[p][1] == stack[i][1])
						trfl[p] = true;

					}
				}
			}

		}
		std::cout << std::endl << "_____________________" << std::endl;
		/*for (int i = 0; i < zuyger; ++i)
		{
		std::cout << "urra" << t[i] << std::endl;
		}*/
		delete[]stack;
		delete[]stack2;
		delete[]stack3;
		++c;
	}
	/*if(t[0].empty())
	std::cout<<"sadasdasdadassadasd";
	for (int i = 0; i < zuyger; ++i)
	{
	std::cout << "urra" << t[i] << std::endl;
	}
	*/
	system("Pause");
	return 0;
}