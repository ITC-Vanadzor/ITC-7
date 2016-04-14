package figure;
public class Queen extends Figure implements FigureMethods
 
{
	public Queen(String color, int row, int column)
	{
		super(color, row, column);

	}
	public 	boolean Step(Position start, Position end)
	{
		if(  (Math.abs(start.getNumber1()-end.getNumber1()) == Math.abs(end.getNumber2()-start.getNumber2()))
			 || (start.getNumber1()==end.getNumber1() || start.getNumber2()  == end.getNumber2()))
		{
			return true;
		}
		return false;
	}
}
