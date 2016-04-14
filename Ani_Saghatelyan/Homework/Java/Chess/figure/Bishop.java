package figure;
import Chess.*;
public class Bishop extends Figure  implements FigureMethods
{

	public Bishop(String color, int row, int column)
	{
		super(color, row, column);

	}
	
	public boolean Step(Position start, Position end)
	{
		int startRow=start.getNumber1();
		int startColumn=start.getNumber2();
		int  endRow=end.getNumber1();
		int  endColumn=end.getNumber2();
		if((Math.abs(startColumn-endColumn)==1  && Math.abs(startRow-endRow)==2) || (Math.abs(startRow-endRow)==1  && Math.abs(startColumn-endColumn)==2))
		{	
			 if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )	
		         {	 
				return false; 	
			}
			return true;
		}
		return false;
	}
}
