package figure;
import Chess.*;

public class Pawns extends Figure  implements FigureMethods 
{	
	public Pawns(String color, int row, int column)
	{
	    	super(color, row, column);

	}
	
	public 	boolean Step(Position start, Position end)
	{
		int startRow=start.getNumber1();
		int startColumn=start.getNumber2();
		int  endRow=end.getNumber1();
		int  endColumn=end.getNumber2();
	
	 	if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )	
		{	 
			return false; 	
		}
		else if((startColumn==1 && this.getColor()=="white" && endColumn==3 && startRow==endRow) || (startColumn==6 && this.getColor()=="black" && endColumn==4 && startRow==endRow))
		{
			return true;
		}
		else if((startRow==endRow && Math.abs(startColumn-endColumn)==1))
		{
			return true;
		}
		else if((ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow, endColumn).getColor()!=this.getColor()) && Math.abs(startRow-endRow)==1 && Math.abs(startColumn-endColumn)==1) 
		{
			return true;
		}
		
		return true;
	}

}

