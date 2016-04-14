import java.util.Scanner;


class battle 
{
	public static int[][] qartez = {
		{1, 1, 1, 0},
		{0, 0, 1, 0},
		{0, 1, 1, 0},
		{0, 0, 0, 0}
	};
	public static int meker;
	public static int j_max;
	public static int i_max;
	public static int j_min;

    public static void main(String[] args) 
    {
    	int naver = 0;
    	for(int i = 0; i < 4; ++i)
    	{
    		for(int j = 0; j < 4; ++j)
    		{
    			if(qartez[i][j] == 1)
    			{
    				j_max = j;
    				j_min = j;
    				i_max = i;
    				stugum(qartez, i, j);
    				if(meker == ((j_max - j_min) + 1) * (i_max + 1))
    				{
    					++naver;
    				}
    			}
    		}
    	}
    	System.out.print("naveri qanak@ = " + naver);
    }

    public static void stugum(int qartez[][], int i, int j)
    {
    	++meker;
    	qartez[i][j] = 2;
    	if(j + 1 < 4 && qartez[i][j + 1] == 1)
    	{
    		if(j >= j_max)
    		{
    			j_max = j + 1;
    		}
    		stugum(qartez, i, j + 1);
    	}
    	if(i + 1 < 4 && qartez[i + 1][j] == 1)
		{
			if(i >= i_max)
			{
				i_max = i + 1;
			}
			stugum(qartez, i + 1, j);
		}
		if(j - 1 >= 0 && qartez[i][j - 1] == 1)
		{
			if(j_min <= j)
			{
				j_min = j - 1;
			}
			stugum(qartez, i, j - 1);
		}
		if(i - 1 >= 0 && qartez[i - 1][j] == 1)
		{
			stugum(qartez, i - 1, j);
		}
    }
}
