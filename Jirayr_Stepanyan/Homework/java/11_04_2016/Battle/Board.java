import java.util.Scanner;

public class Board
{
	private boardSize;
	private int[boardSize][boardSize] board;
	Board(int n)
	{
		boardSize = n;
	}

	public void inputBoard()
	{
		Scanner cin = new Scanner(System.in);
		for(int i = 0; i < boardSize; ++i)
    	{
    		for(int j = 0; j < boardSize; ++j)
    		{
    			System.out.println("please input board[" + i + "][" + j + "]");
    			board[i][j] = cin.nextInt();
    		}
    	}
	}

	public int[][] getBoard() {
		return board;
	}
}