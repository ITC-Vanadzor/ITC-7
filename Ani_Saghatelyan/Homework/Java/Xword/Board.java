public class  Board
{
	private int size;
	private char[][] board;
	private String word;
	public Board(String word)
	{
		this.word=word;
		size=word.length();
		board=new char[size][size];
	}
	
	public void  fillBoard()
	{
		for(int  i=0;  i<size; ++i)
		{
			for(int j=0; j<size; ++j )
				if(i==j || j==size-(i+1))
				{
					board[i][j]=word.charAt(i);
				}
				else	
				{
					board[i][j]=' ';
				}
		}
	}
	
	public void printBoard()
	{
		for(int i=0; i<size; ++i)
		{
			for(int j=0; j<size; ++j)
			{
				System.out.print(board[i][j]);
			}
			System.out.println("");
		}
	}
}
