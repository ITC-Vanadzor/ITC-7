package Chess.Figures;

import Chess.ChessBoard.*;

public class Bishop extends Figure implements Piece {
    public Bishop (Cell position, char color) {
        super(position, color, 'L', 'l');
    }
    public boolean step (Cell finishPosition) {
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        
        if (! checkPosition(finishPosition)) {
            return false;
        } 
        
        if (Math.abs(i1-i2) != Math.abs(j1-j2)) {
            return false;
        } else {
	        int minRow = Math.min(i1, i2);
	        int minCol = Math.min(j1, j2);
	        int diff = Math.abs(i1-i2);
	        for (int k = 1; k < diff; ++k) {
	            if (Board.area[minRow+k][minCol+1] != null) {
	                return false;
	            }
	        }
            return true;
        }
    }

}
