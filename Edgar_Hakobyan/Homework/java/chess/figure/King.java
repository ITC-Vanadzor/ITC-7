package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class King extends Figure implements Piece{
   
    public King(Board board1,String c) {
        super(board1);
        color = c;
    }

    public boolean step(Position start, Position finish) {
        if( (Math.abs(posStartX-posFinishX) + Math.abs(posStartY-posFinishY)) >0 && (Math.abs(posStartX-posFinishX) + Math.abs(posStartY-posFinishY)) < 3 ) {
            if( board[posFinishX][posFinishY] != null && isSameColor(posFinishX,posFinishY) ) {
                    return false;
            } else {
                return true;
            }
        } else {
            return false;
        }
    }

}
