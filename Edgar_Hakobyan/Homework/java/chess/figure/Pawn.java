package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Pawn extends Figure implements Piece {

    public Pawn(Board board1,String c) {
        super(board1);
        color = c;
    }

    public boolean step(Position start, Position finish) {
        if( posStartY != 0 && posStartY != 7 && (posStartX == posFinishX || posFinishY-posStartY == 1) ) {
            if( posStartX == posFinishX ) {
                if( posFinishY-posStartY == 2 || posFinishY-posStartY == 1 ) {
                    if( posFinishY-posStartY == 2 ) {
                        if( posStartY != 1 || posStartY != 6 ) {
                            return false;
                        }
                    }
                } else {
                    return false;
                }
                if(board[posFinishX][posFinishY] == null) {
                    return true;
                } else {
                    return false;
                }
            } else {
                if(board[posFinishX][posFinishY] == null) {
                    return false;
                }
                if( board[posFinishX][posFinishY] != null && isSameColor(posFinishX,posFinishY) ) {
                    return false;
                } else {
                    return true;
                }
            }
        } else {
            return false;
        }
    }

}
