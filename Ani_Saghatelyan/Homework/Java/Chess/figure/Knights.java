package figure;
import Chess.*;
public class Knights extends Figure  implements FigureMethods 
{	
	public Knights(String color, int row, int column)
	{
	    	super(color, row, column);

	}
	
	public 	boolean Step(Position start, Position end)
	{
		if(Math.abs(start.getNumber1()-end.getNumber1()) == Math.abs(end.getNumber2()-start.getNumber2()))


			if(start.getNumber1()>end.getNumber1())
			{
				int max = start.getNumber2() > end.getNumber2() ? start.getNumber2() :end.getNumber2();
				for(int i=max, j=start.getNumber1(); i>=end.getNumber2(); --i, --j)
				{
					if(ChessBoard.getFigure(i,j)==1)
					{
						return false;
					}	
				}  	
			}
			else if(  start.getNumber1()  <  end.getNumber1())
			{
				int max = start.getNumber2() > end.getNumber2() ? start.getNumber1() :end.getNumber1();
				for(int i=max, j=start.getNumber2(); i>=end.getNumber1(); --i, --j)
				{
					if(ChessBoard.getFigure(i,j)==1)
					{
						return false;
					}	
				}
			}
		return true;	

	}
}
