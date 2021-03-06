package figure;
import Chess.*;
public class Knights extends Figure  implements FigureMethods 
{	
	String color;
	int row;
	int column;
	public Knights(String color, int row, int column)
	
	{
	    	super(color, row, column);
		this.row=row;
		this.column=column;
		this.color=color;
	}
	
	public 	boolean Step(Position start, Position end)
	{
		int startRow=start.getNumber1();
		int startColumn=start.getNumber2();
		int  endRow=end.getNumber1();
		int  endColumn=end.getNumber2();
		if(Math.abs(startRow-endRow) == Math.abs(endColumn-startColumn))
		{
			int diffPosNum1= startRow  <  endRow ? 1:-1;
			int diffPosNum2= startColumn  <  endColumn ? 1:-1;

				for(int i=startRow+1,   j=startColumn+1; i<endRow; i+=diffPosNum1, j+=diffPosNum2)
				{
					if(ChessBoard.getFigure(i,j)!=null)
					{
						return false;
					}	
				} 
				 
				if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )	
				{
					return false; 	
				}
				
				
				ChessBoard.setFigure(color,endRow,endColumn);
				System.out.println("figure changed his position from ["+row+","+column+"] to ["+endRow+","+endColumn+"]");
				ChessBoard.resetFigure(row,column);
				return true;
		}
			
		
		return false;	

	}
}
