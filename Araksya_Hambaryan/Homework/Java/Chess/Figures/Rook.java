package Chess.Figures;

import Chess.ChessBoard.*;

public class Rook extends Figure implements Piece {
    public Rook (Cell startPosition, char color) {
        super(startPosition, color, 'T', 't');
    }
    
    public boolean step (Cell finishPosition) {
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        
        if (! checkPosition(finishPosition) || (i1 != i2 && j1 != j2)) {
            return false;
        }
        
	    if (j1 == j2) {
	        int maxRow = Math.max(i1, i2);
	        int minRow = Math.min(i1, i2);
	        for (int k = minRow+1; k < maxRow; ++k) {
	            if (Board.area[k][j1] != null) {
	                return false;
	            }
	        }
	    }
	    
	    if (i1 == i2) {
	        int maxCol = Math.max(j1, j2);
	        int minCol = Math.min(j1, j2);
	        for (int k = minCol+1; k < maxCol; ++k) {
	            if (Board.area[i1][k] != null) {
	                return false;
	            }
	        }
	    }
	    return true;
	    
    }
    
	        

}
