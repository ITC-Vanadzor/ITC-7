package figure;
import Chess.*;
public class Rook extends Figure implements FigureMethods

{
	public Rook(String color, int row, int column)
	{
		super(color, row, column);

	}
	public Position getPosition()
	{
		return super.getPosition();
	}
	
	public boolean Step(Position start, Position end)
	{
		
		int startRow=start.getNumber1();
		int startColumn=start.getNumber2();
		int  endRow=end.getNumber1();
		int  endColumn=end.getNumber2();
		if(startRow==endRow || startColumn==endColumn)
		{
			int diffPos=0;
			if(startRow==endRow)
			{
				diffPos= startColumn  <  endColumn ? 1:-1;
				for(int i=startColumn+1; i<endColumn; i+=diffPos)
				{
					if(ChessBoard.getFigure(startRow,i)!=null)
					{
						return false;
					}	
				}
			}
			else if(startColumn==endColumn)
			{ 
				diffPos= startRow  <  endRow ? 1:-1;
				for(int i=startRow+1; i<endRow; i+=diffPos)
				{
					if(ChessBoard.getFigure(i,startColumn)!=null)
					{
						return false;
					}	
				}
			}

			if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )			       {
				return false; 	
			}
			return true;

		}
		
		return false;
	}
	
}
