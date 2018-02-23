package Chess.Figures;

import Chess.ChessBoard.*;

public class Queen extends Figure implements Piece {
    public Queen (Cell startPosition, char color) {
        super(startPosition, color, 'D', 'd');
    }
    
    public boolean step (Cell finishPosition) {
        if (! checkPosition(finishPosition)) {
            return false;
        }    
	    return (asKnight(finishPosition) || asRook(finishPosition) || asBishop(finishPosition));
    }
    
    private boolean asKnight(Cell finishPosition){
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        return ((Math.abs(i1-i2)==2 && Math.abs(j2-j1)==1) || (Math.abs(i1-i2)==1 && Math.abs(j2-j1)==2));
    }
    
    private boolean asRook(Cell finishPosition){
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        int minRow = Math.min(i1, i2);
	    int minCol = Math.min(j1, j2);
	    int maxRow = Math.max(i1, i2);
	    int maxCol = Math.max(j1, j2);
	    if (j1 == j2) {
	        for (int k = minRow+1; k < maxRow; ++k) {
	            if (Board.area[k][j1] != null) {
	            System.out.println("1");
	                return false;
	            }
	        }
	    }
	    
	    
	    if (i1 == i2) {
	        for (int k = minCol+1; k < maxCol; ++k) {
	            if (Board.area[i1][k] != null) {
	            System.out.println("2");
	                return false;
	            }
	        }
	    }
	    return true;
    }
    
    private boolean asBishop(Cell finishPosition){
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        int minCol = Math.min(j1, j2);
        int minRow = Math.min(i1, i2);
        
        if (Math.abs(i1-i2) == Math.abs(j1-j2)) {
            int diff = Math.abs(i1-i2);
	        for (int k = 1; k < diff; ++k) {
                if (Board.area[minRow+k][minCol+1] != null) {
	                System.out.println("3");
                    return false;
	            }
	        }  
	    }
	    return true;
	}
}

