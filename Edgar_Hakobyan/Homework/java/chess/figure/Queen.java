package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Queen extends Figure implements Piece {

    public Queen(Board board1,String c) {
        super(board1);
        color = c;
    }

    public boolean step(Position start, Position finish) {
        changeToInt(start,finish);  
        if( posStartX == posFinishX || posStartY == posFinishY || ( Math.abs(posStartX-posFinishX) == Math.abs(posStartY-posFinishY) )) {
            if( posStartX == posFinishX ) {
                if ( posStartY > posFinishY ) {
                    for(int i=posStartY-1; i > posFinishY; --i) {
                        System.out.println(board[posStartX][i]);
                        if(board[posStartX][i] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=posStartY+1; i < posFinishY; ++i) {
                        if(board[posStartX][i] != null) {
                            return false;
                        }
                    }
                }
            } else if ( posStartY == posFinishY ) {
                if(posFinishX > posStartX) {
                    for(int i=posStartX+1; i < posFinishX; ++i) {
                        if(board[i][posStartY] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=posStartX-1; i > posFinishX; --i) {
                        if(board[i][posStartY] != null) {
                            return false;
                        }
                    }
                } 
            } else {
                if( posFinishX-posStartX > 0 && posFinishY-posStartY > 0 ) {
                    for(int i=posStartX+1,j=posStartY+1; i < posFinishX; ++i,++j) {
                        if(board[i][j] != null) {
                            return false;
                        }
                    }
                } else if( posFinishX-posStartX > 0 && posFinishY-posStartY < 0 ) {
                    for(int i=posStartX+1,j=posStartY-1; i < posFinishX; ++i,--j) {
                        if(board[i][j] != null) {
                            return false;
                        }
                    }
                } else if( posFinishX-posStartX < 0 && posFinishY-posStartY < 0 ) {
                    for(int i=posStartX-1,j=posStartY-1; i > posFinishX; --i,--j) {
                        if(board[i][j] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=posStartX-1,j=posStartY+1; i > posFinishX; --i,++j) {
                        if(board[i][j] != null) {
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
