public class Soldier extends Board 
{
	public void step(int x1,int y1,int x2,int y2) 
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
}
