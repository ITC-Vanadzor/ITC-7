import java.util.Scanner;

public class Board
{
	private int boardSize;
	private Integer[][] board;
	Board(int c_boardSize)
	{
		this.boardSize = boardSize;
		board = new Integer[c_boardSize][c_boardSize];
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

	public Integer[][] getBoard() {
		return board;
	}
}