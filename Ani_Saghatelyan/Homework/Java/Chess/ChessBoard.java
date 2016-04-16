package Chess;
import  figure.*;
public class  ChessBoard
{
	private  static  Figure[][]  board=new Figure[8][8];
	
	public static  void setFigure( String color,int row, int column )
	{
		if(board[row][column]==null )
		{
			board[row][column]= new Figure(color,row,column);
		}
		else
		{
			System.out.println("There is a figure in this position");
		}
	}
	public static void resetFigure(int pos1, int pos2)
	{
	
		board[pos1][pos2]=null;
	}
	public static Figure getFigure(int pos1, int pos2)
	{
		return board[pos1][pos2];
	}
	public static  void printBoard()
	{
		for(int j=0; j<8; ++j)
		{	
			for(int i=0; i<8; ++i)
			{
				if(board[i][j]==null)
				{
					System.out.print(" _ ");

				}
				else
				{
					System.out.print("  "+1);
				}
			}	
			System.out.println("");
		}
		
			System.out.println("");
	}

}
