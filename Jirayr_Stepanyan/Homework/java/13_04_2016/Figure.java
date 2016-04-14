public class Figure extends Board 
{
		public String name;
		public String color;
		public Figure(String g_name, String g_color)
		{
			name = g_name;
			color = g_color;
		};
		public void cordinates(int x, int y) 
		{
			if((x >= 1 && x <= 8) && (y >= 1 && y <= 8))
			{
				if(board[x][y] == null)
				{
					board[x][y] = this;
					System.out.print(board[x][y]);
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
}
