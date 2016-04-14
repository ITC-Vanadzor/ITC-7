public class Board 
{
		public Figure [][] board = new Figure[8][8];
		public void step(int x1, int y1, int x2, int y2)
		{
			if((x1 >= 1 && x1 <= 8) && (y1 >= 1 && y1 <= 8) && (x2 >= 1 && x2 <= 8) && (y2 >= 1 && y2 <= 8))
			{
				if(board[x1][y1] != null)
				{
					if(board[x1][y1].name.equals("Soldier"))
					{
						if(board[x2][y2] == null || (x2 != x1 && y2 != y1) && (!board[x1][y1].color.equals(board[x2][y2].color)))
						{
							Soldier soldier = new Soldier();
							soldier.step(x1, y1, x2, y2);
						}
					}
					else if(board[x1][y1].name.equals("Elephant"))
					{
						Elephant elephant = new Elephant();
						elephant.step(x1, y1, x2, y2);
					}
					else if(board[x1][y1].name.equals("Rook"))
					{
						Rook rook = new Rook();
						rook.step(x1, y1, x2, y2);
					}
				}
				else
				{
					System.out.print("there are not a figure for moving");
				}	
			}
			else
			{
				System.out.print("that cordinates are out of board");
			}
		}
}