import java.util.Scanner;

public class Chess extends Board
{
	public static void main(String[] args) 
	{
		Scanner cin = new Scanner(System.in);
		String figure_name = new String("");
		int counter = 0;
		while(counter < 3)
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
			Figure figure = new Figure(figure_name, figure_color);
			if((row >= 1 && row <= 8) && (column >= 1 && column <= 8))
			{
				if(board[row][column] == null)
				{
					board[row][column] = figure;
					System.out.print(board[row][column]);
					System.out.println("you added in board[" + row + "][" + column + "]" + board[row][column].color + " " + board[row][column].name);
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
			++counter;

			if(counter == 3)
			{
				counter = 0;
				while(counter < 3)
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
				}
				++counter;
			}
		}
	}
}
