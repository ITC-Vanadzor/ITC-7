public class Rook extends Board
{
		public static void step(int x1,int y1,int x2,int y2) 
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
}
