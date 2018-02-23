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
		
	}
	public void setPosition(int row, int column)
	{
		if(row>7 || column>7 || row<0 || column >7 )
		{
			System.out.println("The position need to be between [0,7]");
			//System.exit(0);	
		}
		else
			position=new Position(row, column);
	}
	public Position  getPosition()
	{
		return position;
	}
	public String getColor()	
	{
		return color;
	}

}

