package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Rook extends Figure implements Piece {
    
    public Rook(Board board1,String c) {    
        super(board1);
        color = c;
    }

    public boolean step(Position start, Position finish) {
        if( posStartX == posFinishX || posStartY == posFinishY) {
            if(posStartX == posFinishX) {
                if(posFinishY > posStartY) {
                    for(int i=posStartY+1; i < posFinishY; ++i) {
                        if(board[posStartX][i] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=posStartY-1; i > posFinishY; --i) { 
                        if(board[posStartX][i] != null) {
                            return false;
                        }
                    }
                }
            } else {
                if(posFinishX > posStartX) {
                    for(int j=posStartX+1; j < posFinishX; ++j) {
                        if(board[j][posStartY] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int j=posStartX-1; j > posFinishX; --j) {
                        if(board[j][posStartY] != null) {
                            return false;
                        }
                    }
                }
            }
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
