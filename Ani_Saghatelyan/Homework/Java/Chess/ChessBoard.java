package Chess;
import  figure.*;
public class  ChessBoard
{
	private static  int[][]  board=new int[8][8];
	
	public static  void setFigure(int row, int column)
	{
		if(board[row][column]==0)
		{
			board[row][column]=1;
		}
		else
		{
			System.out.println("There is a figure in this position");
		}
	}
	public static int getFigure(int pos1, int pos2)
	{
		return board[pos1][pos2];
	}
	public static  void printBoard()
	{
		for(int j=0; j<8; ++j)
		{	
			for(int i=0; i<8; ++i)
			{
				System.out.print(board[i][j]);
			}
			System.out.println("");
		}
		
			System.out.println("");
	}

}
