#include <iostream>
int main()
{
	int glx_massiv[20] = {0,1,2,1,3,1,4,1,5,2,3,2,4,3,4,3,5,5,8,7};
	int araji_massiv[10] = {0,0,0,0,0,0,0,0,0,0};
	int entabazmutyun[10] = {0,0,0,0,0,0,0,0,0,0};
	int x = 0;
	int k = 0;
	for(int i = 1; i < 20;)
	{
		if(entabazmutyun[x] == 0)
		{
			entabazmutyun[x] = glx_massiv[i];
		}
		if(glx_massiv[i] == entabazmutyun[x])
		{
			if(i % 2 == 0)
			{
	 			araji_massiv[k] = glx_massiv[i - 1];
				++k;
			}
			else
			{
				araji_massiv[k] = glx_massiv[i + 1];
				++k;
			}
		}
		++i;
		++x;
		if(i == 20)
		{
			while(araji_massiv[0] != 0)
			{
				entabazmutyun[x] = araji_massiv[0];
				for(int j = 1; j < 20; ++j)
				{
					if(glx_massiv[j] == entabazmutyun[x] && j % 2 == 0)
					{
						int b = 1;
						while(araji_massiv[b] != 0)
						{
							if(glx_massiv[j - 1] == araji_massiv[b])
							{
								glx_massiv[j] = 0;
								glx_massiv[j - 1] = 0;	
							}
						}
					 }
       		    			 if(glx_massiv[j] == entabazmutyun[x] && j & 2 != 0)
				         {
						int b = 1;
						while(araji_massiv[b] != 0)
						{
							if(glx_massiv[j - 1] == araji_massiv[b])
							{
								glx_massiv[j] = 0;
								glx_massiv[j + 1] = 0;	
							}
						}
				         }
				}
				int a = 0;
				while(araji_massiv[a] != 0)
				{
					araji_massiv[a] = araji_massiv[a + 1];
					++a;
				}
				++x;
			}
			for(int i = 0, j = 1; j < x; ++j)
			{
				std::cout << j + 1 << " zuyg --> " << araji_massiv[i] << araji_massiv[j] << std::endl;
				if(j == x - 1)
				{
					++i;
				}
			}
		}
	}

   return 0;
}
