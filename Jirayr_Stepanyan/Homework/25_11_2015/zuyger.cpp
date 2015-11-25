#include <iostream>
int main()
{
	int glx_massiv[10][2] = {1,2,1,3,2,3,4,5,4,6,5,6,7,8,7,9,8,9,8,2};
	int tmp = 0;
	int entabazmutyun[10] = {0,0,0,0,0,0,0,0,0,0};
	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 2; ++j)
		{
			int x = 0;
			if(glx_massiv[i][j] != 0)
			{
		  	  if(entabazmutyun[x] == 0)
			    {
			       	entabazmutyun[x] = glx_massiv[i][j];
				++x;
			    }
			  for(int z = 0; z < 10; ++z)
			  {
				for(int q = 0; q < 2; ++q)
				{
				  int zuyger = 0;
				  if(glx_massiv[z][q] == entabazmutyun[0])
				  {
					if(q == 0)
					{
	 					tmp = glx_massiv[z][q + 1];
					}
					else
					{
						tmp = glx_massiv[z][q - 1];
					}
					for(int n = z; n < 10; ++n)
					{
						for(int m = q; m < 2; ++m)
						{
						  if(tmp == glx_massiv[n][m])
						  {
							if(m == 0)
							{
								for(int k = 0; k < x; ++k)
								{
									if(glx_massiv[n][m + 1] == entabazmutyun[k])
									{
										++zuyger;
									}
								}
							}
							else
							{
								for(int k = 0; k < x; ++k)
								{
									if(glx_massiv[n][m - 1] == entabazmutyun[k])
									{
										++zuyger;
									}
								}
							}
						  }
						}
					}
					if(zuyger == x)
					{
					  entabazmutyun[x] = tmp;
				       	  ++x;
					  for(int y = 0; y < 10; ++y)
					  {
					    for(int t = 0; t < 2; ++t)
					    {
					     for(int r = 0; r < x - 1; ++r)
					     {
				  	      if(glx_massiv[y][t]==entabazmutyun[x-1] && t==0 &&glx_massiv[y][t+1]==entabazmutyun[r])
					      {
						    glx_massiv[y][t] = 0;
						    glx_massiv[y][t + 1] = 0;
					      } 
				      	      if(glx_massiv[y][t]==entabazmutyun[x-1] && t!=0 &&glx_massiv[y][t-1]==entabazmutyun[r])
				    	      {
						    glx_massiv[y][t] = 0;
						    glx_massiv[y][t - 1] = 0;
					      }
					     }
					    } 
					  }
					}
				  }
				}
			  }
		        } 
			for(int b = 0; b < x - 1; ++b)
			{
				for(int h = b + 1; h < x; ++h)
				{
					std::cout << entabazmutyun[b] << entabazmutyun[h] << " ";
				}			
			}
			std::cout << "\n";
			for(int f = 0; f < x; ++f)
			{
				entabazmutyun[f] = 0;
			}
		}
	}

   return 0;
}
