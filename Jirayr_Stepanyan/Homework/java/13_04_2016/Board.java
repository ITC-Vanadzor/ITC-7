public class Board 
{
	public static Figure [][] board = new Figure[8][8];
	public static void first_cordinates(int x, int y, Figure figure) 
	{
		if((x >= 1 && x <= 8) && (y >= 1 && y <= 8))
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
		if((x1 >= 1 && x1 <= 8) && (y1 >= 1 && y1 <= 8) && (x2 >= 1 && x2 <= 8) && (y2 >= 1 && y2 <= 8))
		{
			if(board[x1][y1] != null)
			{
				switch(board[x1][y1].name) 
				{
					case "soldier":
						valid_soldier(x1, y1, x2, y2);
						break;
					case "elephant":
						valid_elephant(x1, y1, x2, y2);
						break;
					case "rook":
						valid_rook(x1, y1, x2, y2);
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

	private static void valid_soldier(int from_row, int from_column, int to_row, int to_column)
	{
		if(board[to_row][to_column] == null || (to_row != from_row && to_column != from_column))
		{
			if(board[to_row][to_column] == null || !board[from_row][from_column].color.equals(board[to_row][to_column].color))
			{
				Soldier soldier = new Soldier();
				soldier.step(from_row, from_column, to_row, to_column);
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

	private static void valid_elephant(int from_row, int from_column, int to_row, int to_column)
	{
		if(board[to_row][to_column] == null || !board[from_row][from_column].color.equals(board[to_row][to_column].color))
		{
			Elephant elephant = new Elephant();
			elephant.step(from_row, from_column, to_row, to_column);
		}
		else
		{
			System.out.println("elephant can't eat his partner");
		}
	}

	private static void valid_rook(int from_row, int from_column, int to_row, int to_column)
	{
		if(board[to_row][to_column] == null || !board[from_row][from_column].color.equals(board[to_row][to_column].color))
		{
			Rook rook = new Rook();
			rook.step(from_row, from_column, to_row, to_column);
		}
		else
		{
			System.out.println("rook can't eat his partner");
		}
	}
}