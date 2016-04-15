package Chess.Figures;

import Chess.ChessBoard.*;

public class Knight extends Figure implements Piece {
    public Knight (Cell position, char color) {
        super(position, color, 'R', 'r');
    }
    public boolean step (Cell finishPosition) {
        int j1 = this.startPosition.col;
        int i1 = this.startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        
        if (Cell.equalsCells(this.startPosition, finishPosition)) {
            return false;
        }  
        
        if (Board.getFigure(finishPosition) != null && Board.getFigure(finishPosition).color == this.color) {
            return false;
        }
        
        
	    if ((Math.abs(i1-i2)==2 && Math.abs(j2-j1)==1) || (Math.abs(i1-i2)==1 && Math.abs(j2-j1)==2)) {
	        int maxRow = Math.max(i1, i2);
	        int minRow = Math.min(i1, i2);
	        int maxCol = Math.max(j1, j2);
	        int minCol = Math.min(j1, j2);
	        
	        
	        
	    } else {
	        return false;
	    }; 
    }

}
