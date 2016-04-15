public class Rook extends Board implements Piece
{
	public void step(int x1,int y1,int x2,int y2) 
	{
		if(board[x2][y2] == null || !board[x1][y1].color.equals(board[x2][y2].color))
		{
			if( x1 == x2 || y1 == y2) 
			{
				board[x2][y2] = board[x1][y1];
				board[x1][y1] = null;
				System.out.println("the rook succesfuly moved");
			} 
			else 
			{
				System.out.println("the rook can't do that step");
			}
		}
		else
		{
			System.out.println("rook can't eat his partner");
		}
	}
}
