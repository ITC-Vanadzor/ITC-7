package Chess.Figures;

import Chess.ChessBoard.*;

public class Knight extends Figure implements Piece {
    public Knight (Cell position, char color) {
        super(position, color, 'R', 'r');
    }
    public boolean step (Cell finishPosition) {
        int j1 = startPosition.col;
        int i1 = startPosition.row;
        int j2 = finishPosition.col;
        int i2 = finishPosition.row;
 
        if (! checkPosition(finishPosition)) {
            return false;
        } 
	    return ((Math.abs(i1-i2)==2 && Math.abs(j2-j1)==1) || (Math.abs(i1-i2)==1 && Math.abs(j2-j1)==2));
    }

}
