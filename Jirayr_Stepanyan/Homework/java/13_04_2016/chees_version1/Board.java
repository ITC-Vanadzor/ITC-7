public class Board 
{
		public static Figure [][] board = new Figure[8][8];
		public static void Board_step(int x1, int y1, int x2, int y2)
		{
			if((x1 >= 1 && x1 <= 8) && (y1 >= 1 && y1 <= 8) && (x2 >= 1 && x2 <= 8) && (y2 >= 1 && y2 <= 8))
			{
				if(board[x1][y1] != null)
				{
					if(board[x1][y1].name.equals("soldier"))
					{
						if(board[x2][y2] == null || (x2 != x1 && y2 != y1))
						{
							if(!board[x1][y1].color.equals(board[x2][y2].color))
							{
								Soldier soldier = new Soldier();
								soldier.step(x1, y1, x2, y2);
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
					if(board[x1][y1].name.equals("elephant"))
					{
						if(!board[x1][y1].color.equals(board[x2][y2].color))
						{
							Elephant elephant = new Elephant();
							elephant.step(x1, y1, x2, y2);
						}
						else
						{
							System.out.println("elephant can't eat his partner");
						}
					}
					if(board[x1][y1].name.equals("rook"))
					{
						if(!board[x1][y1].color.equals(board[x2][y2].color))
						{
							Rook rook = new Rook();
							rook.step(x1, y1, x2, y2);
						}
						else
						{
							System.out.println("rook can't eat his partner");
						}
					}
				}
				else
				{
					System.out.println("there are not a figure for moving");
				}	
			}
			else
			{
				System.out.println("that cordinates are out of board");
			}
		}
}