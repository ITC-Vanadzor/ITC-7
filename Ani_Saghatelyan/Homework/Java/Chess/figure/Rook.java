package figure;
import Chess.*;
public class Rook extends Figure implements FigureMethods

{
	public Rook(String color, int row, int column)
	{
		super(color, row, column);

	}
	
	public boolean Step(Position start, Position end)
	{	
		if(start.getNumber1()==end.getNumber1())
		{
			int max = start.getNumber2() > end.getNumber2() ? start.getNumber2() :end.getNumber2();
			int min = start.getNumber2() < end.getNumber2() ? start.getNumber2() :end.getNumber2();
			for(int i=min; i<max; ++i)
			{
				if(ChessBoard.getFigure(start.getNumber1(),i)==1)
				{
					return false;
				}	
			}  	
		}
		else if(  start.getNumber2()  == end.getNumber2())
		{
			int max = start.getNumber1() > end.getNumber1() ? start.getNumber1() :end.getNumber1();
			int min = start.getNumber1() < end.getNumber1() ? start.getNumber1() :end.getNumber1();
			for(int i=min; i<max; ++i)
			{
				if(ChessBoard.getFigure(start.getNumber2(),i)==1)
				{
					return false;
				}	
			}
		}
		return true;	
	}
	
	
}
