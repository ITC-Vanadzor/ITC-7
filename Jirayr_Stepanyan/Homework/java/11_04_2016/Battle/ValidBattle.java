public class ValidBattle
{
	private int[][]board;
	BattleStugum(int[][] board1) {
		board = board1;
	}
	public void sheepCalculate(int i, int j, int j_max, int j_min, int i_max)
    {
    	++meker;
    	board[i][j] = 2;
    	if(j + 1 < 4 && board[i][j + 1] == 1)
    	{
    		if(j >= j_max)
    		{
    			j_max = j + 1;
    		}
    		sheepCalculate(board, i, j + 1);
    	}
    	if(i + 1 < 4 && board[i + 1][j] == 1)
		{
			if(i >= i_max)
			{
				i_max = i + 1;
			}
			sheepCalculate(board, i + 1, j);
		}
		if(j - 1 >= 0 && board[i][j - 1] == 1)
		{
			if(j_min <= j)
			{
				j_min = j - 1;
			}
			sheepCalculate(board, i, j - 1);
		}
		if(i - 1 >= 0 && board[i - 1][j] == 1)
		{
			sheepCalculate(board, i - 1, j);
		}
    }
}
