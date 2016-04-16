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
		fill();
	}
	private  void fill()
	{
		for(int i=0; i<size; ++i)
		{
			for(int j=0; j<size; ++j)
			{
				board[i][j]=' ';
			}
		}
	}
	
	public void  fillBoard()
	{
		for(int  i=0, j=size-1;  i<=j; ++i,  --j)
		{
			board[i][i]= board[j][i]=word.charAt(i);
			board[j][j]=board[i][j]=word.charAt(size-1-i);
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
