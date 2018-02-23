package figure;
import Chess.*;

public class King extends Figure  implements FigureMethods 
{	
	String color;
	int row;
	int column;
	
	public King(String color, int row, int column)
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
	
		if(ChessBoard.getFigure(endRow,endColumn)!=null && ChessBoard.getFigure(endRow,endColumn).getColor()==this.getColor() )	
		{	 
			return false; 	
		
		}
		else if((startColumn==endColumn && Math.abs(startRow-endRow)==1) || (startRow==endRow && Math.abs(startColumn-endColumn)==1)) 
		{
			
			ChessBoard.setFigure(color,endRow,endColumn);
			System.out.println("figure changed his position from ["+row+","+column+"] to ["+endRow+","+endColumn+"]");
			ChessBoard.resetFigure(row,column);
			return true;
		}		
		else if (Math.abs(startRow-endRow)==1 && Math.abs(startColumn-endColumn)==1)
		{
			ChessBoard.setFigure(color,endRow,endColumn);
			System.out.println("figure changed his position from ["+row+","+column+"] to ["+endRow+","+endColumn+"]");
			ChessBoard.resetFigure(row,column);
			return true;
		}
		else
		{
			ChessBoard.setFigure(color,endRow,endColumn);
			System.out.println("figure changed his position from ["+row+","+column+"] to ["+endRow+","+endColumn+"]");
			ChessBoard.resetFigure(row,column);
			return true;
		}
	}

}

