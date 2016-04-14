public class BattleStugum extends battle
{
	public void stugum(int qartez[][], int i, int j)
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