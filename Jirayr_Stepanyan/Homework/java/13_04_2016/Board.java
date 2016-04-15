public class Board 
{
	public static Figure [][] board = new Figure[9][9];
	public static void first_cordinates(int x, int y, Figure figure) 
	{
		if((x >= 1 && x <= 9) && (y >= 1 && y <= 9))
		{
			if(board[x][y] == null)
			{
				board[x][y] = figure;
				System.out.println("you added in board[" + x + "][" + y + "]" + board[x][y].color + " " + board[x][y].name);
			}
			else
			{
				System.out.println("ooooooops.... there are a figure!!!");
			}
		}
		else
		{
			System.out.println("out of board");
		}
	}

	public static void Board_step(int x1, int y1, int x2, int y2)
	{
		if((x1 >= 1 && x1 <= 9) && (y1 >= 1 && y1 <= 9) && (x2 >= 1 && x2 <= 9) && (y2 >= 1 && y2 <= 9))
		{
			if(board[x1][y1] != null)
			{
				switch(board[x1][y1].name) 
				{
					case "soldier":
						Soldier soldier = new Soldier();
						soldier.step(x1, y1, x2, y2);
						break;
					case "elephant":
						Elephant elephant = new Elephant();
						elephant.step(x1, y1, x2, y2);
						break;
					case "rook":
						Rook rook = new Rook();
						rook.step(x1, y1, x2, y2);
						break;
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