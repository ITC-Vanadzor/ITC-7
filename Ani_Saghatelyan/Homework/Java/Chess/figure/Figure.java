package figure;
import Chess.*;
public class Figure
{
	private Position  position;
	private String color;

	public Figure(String color, int row, int column)
	{
		this.position=new Position(row,column);
		this.color=color;
		ChessBoard.setFigure(row,column);
		
	}
	public void setPosition(int row, int column)
	{
		if(row>8 || column>8 || row<1 || column >8 )
		{
			System.out.println("The position need to be between [1,8]");
			System.exit(0);	
		}
		else
			position=new Position(row, column);
			ChessBoard.setFigure(row,column);
	}
	public Position  getPosition()
	{
		return position;
	}
	

}

