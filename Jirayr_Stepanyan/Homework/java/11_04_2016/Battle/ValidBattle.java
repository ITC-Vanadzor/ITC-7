public class ValidBattle
{
	public Integer[][] board;
	private int meker;
    private int j_max;
    private int i_max;
    private int j_min;
    private int naver;

    ValidBattle(int c_meker, int c_j_max, int c_j_min, int c_i_max, int c_naver)
    {
    	this.meker = c_meker;
    	this.j_max = c_j_max;
    	this.j_min = c_j_min;
    	this.i_max = c_i_max;
    	this.naver = c_naver;
    }

	public int beforeSheep( int boardSize)
	{
		
    	for(int i = 0; i < boardSize; ++i)
    	{
    		for(int j = 0; j < boardSize; ++j)
    		{
    			if(board[i][j] == 1)
    			{
    				j_max = j;
    				j_min = j;
    				i_max = i;
    				sheepCalculate(i, j, boardSize);
    				if(meker == ((j_max - j_min) + 1) * (i_max + 1))
    				{
    					++naver;
    				}
    			}
    		}
    	}
    	return naver;
	}

	private void sheepCalculate(int i, int j, int boardSize)
    {
    	++meker;
    	board[i][j] = 2;
    	if(j + 1 < boardSize && board[i][j + 1] == 1)
    	{
    		if(j >= j_max)
    		{
    			j_max = j + 1;
    		}
    		sheepCalculate(i, j + 1, boardSize);
    	}
    	if(i + 1 < boardSize && board[i + 1][j] == 1)
		{
			if(i >= i_max)
			{
				i_max = i + 1;
			}
			sheepCalculate(i + 1, j, boardSize);
		}
		if(j - 1 >= 0 && board[i][j - 1] == 1)
		{
			if(j_min <= j)
			{
				j_min = j - 1;
			}
			sheepCalculate(i, j - 1, boardSize);
		}
		if(i - 1 >= 0 && board[i - 1][j] == 1)
		{
			sheepCalculate(i - 1, j, boardSize);
		}
    }
}
