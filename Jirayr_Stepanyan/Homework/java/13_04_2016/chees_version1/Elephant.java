public class Elephant extends Board 
{
		public static void step(int x1,int y1,int x2,int y2) 
		{
				if( Math.abs(x1-x2) == Math.abs(y1-y2) ) 
				{
					board[x2][y2] = board[x1][y1];
					board[x1][y1] = null;
					System.out.println("the elephant succesfuly moved");
				} 
				else 
				{
						System.out.println("elephant can't do that step");
				}
		}
}
