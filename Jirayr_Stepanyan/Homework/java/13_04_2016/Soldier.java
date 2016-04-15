public class Soldier extends Board implements Piece
{
	public void step(int x1,int y1,int x2,int y2) 
	{
		if(board[x2][y2] == null || (x2 != x1 && y2 != y1))
		{
			if(board[x2][y2] == null || !board[x1][y1].color.equals(board[x2][y2].color))
			{
				if(board[x1][y1].color.equals("white"))
				{
					if(y2 > y1)
					{
						board[x2][y2] = board[x1][y1];
						board[x1][y1] = null;
						System.out.println("the soldier succesfuly moved");
					}
					else
					{
						System.out.println("soldier can't go back!!!");
					}
				}
				else if(board[x1][y1].color.equals("black"))
				{
					if(y2 < y1)
					{
						board[x2][y2] = board[x1][y1];
						board[x1][y1] = null;
						System.out.println("the soldier succesfuly moved");
					}
					else
					{
						System.out.println("soldier can't go back!!!");
					}
				}
			}
			else
			{
				System.out.println("soldier can't eat his partner");
			}
		}
		else
		{
			System.out.println("soldier can't do that step");
		}
	}
}
