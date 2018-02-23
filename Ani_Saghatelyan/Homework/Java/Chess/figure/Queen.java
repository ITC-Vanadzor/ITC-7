package figure;
import Chess.*;
public class Queen extends Figure implements FigureMethods
 
{
	
       private String color;
       private	int row;
       private 	int column;
	
	public Queen(String color, int row, int column)
	{
	    	super(color, row, column);
		this.color=color;
		this.row=row;
		this.column=column;

	}
	public 	boolean Step(Position start, Position end)
	{
	    int startRow=start.getNumber1();
	    int startColumn=start.getNumber2();
            int  endRow=end.getNumber1();
	    int  endColumn=end.getNumber2();
	    if((startRow==endRow || startColumn==endColumn) || (Math.abs(startRow-endRow) == Math.abs(endColumn-startColumn)))
	    {
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
		 }	
		 else if(Math.abs(startRow-endRow) == Math.abs(endColumn-startColumn))
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
		} 
					 
		if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )	
		{
			return false; 	
		}
		ChessBoard.resetFigure(endRow,endColumn);
		System.out.println("figure changed his position from ["+row+","+column+"] to ["+endRow+","+endColumn+"]");
		ChessBoard.setFigure(color,row,column);
		return true;
	}
		
	return false;
	
	}
}
