package Chess.Figures;

import Chess.ChessBoard.*;

public class Pawn extends Figure implements Piece {
    public Pawn (Cell position, char color) {
        super(position, color, 'P', 'p');
    }
    
    public boolean step (Cell finishPosition) {
        int j1 = this.startPosition.col;
        int i1 = this.startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
        
        if (Cell.equalsCells(this.startPosition, finishPosition)) {
            return false;
        }  
        
        
        if (Math.abs(i1-i2) > 2 || Math.abs(j1-j2) > 1) {
            return false;
        }
        
        if (this.color == 'W') {
            if (i2 <= i1) {
                return false;
            }
            if (i1 != 1 && (i2-i1) !=1) {
                return false;
            }
            if ((i2-i1)==1 && Math.abs(j1-j2)==1 && Board.getFigure(finishPosition) != null && Board.getFigure(finishPosition).color == this.color ) {
                return false;
            }
        } else {
            if (i2 >= i1) {
                return false;
            }
            if (i1 != 7 && (i1-i2) !=1 ) {
                return false;
            }
            if ((i1-i2)==1 && Math.abs(j1-j2)==1 && Board.getFigure(finishPosition) != null && Board.getFigure(finishPosition).color == this.color ) {
                return false;
            }
        }
	    return true;
    }

}
