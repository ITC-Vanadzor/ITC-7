import java.util.Scanner;

public class Chess extends Board
{
	public static void main(String[] args) 
	{
		Scanner cin = new Scanner(System.in);
		String figure_name = new String("");
		int counter = 0;
		while(counter < 2)
		{
			boolean name = false;
			do
			{
				System.out.print("please input the figure's name one of these (rook, elephant, soldier):  ");
				figure_name = cin.nextLine();
				if(figure_name.equals("rook") || figure_name.equals("elephant") || figure_name.equals("soldier"))
				{
					name = true;
				}	
			}while(!name);
			String figure_color = new String("");
			boolean color = false;
			do
			{
				System.out.print("please input the figure's color one of these ( black, white ):  ");
				figure_color = cin.nextLine();
				if(figure_color.equals("black") || figure_color.equals("white"))
				{
					color = true;
				}
			}while(!color);
			System.out.print("please input the row cordinate of figure  row (1 - 8): ");
			int row = cin.nextInt();
			System.out.print("please input the column cordinate of figure  col (1 - 8): ");
			int column = cin.nextInt();
			Figure chess_figure = new Figure(figure_name, figure_color);
			first_cordinates(row, column, chess_figure);
			++counter;
			if(counter == 2)
			{
				counter = 0;
				do
				{
					System.out.print("please input cordinates from (row): ");
					int from_row = cin.nextInt();
					System.out.print("please input cordinates from (column): ");
					int from_column = cin.nextInt();
					System.out.print("please input cordinates to (row): ");
					int to_row = cin.nextInt();
					System.out.print("please input cordinates to (column): ");
					int to_column = cin.nextInt();
					Board_step(from_row, from_column, to_row, to_column);
					for(int i = 1; i < 9; ++i)
					{
						for(int j = 1; j < 9; ++j)
						{
							if(board[i][j] != null)
							{
								++counter;
							}
						}
					}
				}while(counter > 1);
				System.out.println("the gave is over, there is only one figure on board");	
				counter = 3;
			}	
		}
	}
}
