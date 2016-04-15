package Chess.Figures;

import Chess.ChessBoard.*;

public class King extends Figure implements Piece {
    public King (Cell startPosition, char color) {
        super(startPosition, color, 'K', 'k');
    }
    
    public boolean step (Cell finishPosition) {
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        
        if (Cell.equalsCells(this.startPosition, finishPosition)) {
            return false;
        } 
        if (Board.getFigure(finishPosition) != null && Board.getFigure(finishPosition).color == this.color) {
	        return false;
	    } else {
	        return ((Math.abs(i1-i2)==1 && j2==j1) || (Math.abs(j1-j2)==1 && i2==i1) || (Math.abs(i1-i2)==1 && Math.abs(i1-i2)==1) ); 
	    }
    }

}
