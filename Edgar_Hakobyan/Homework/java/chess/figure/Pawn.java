package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Pawn implements Piece {
    private String color;
    public Pawn(String c) {
        color = c;
    }

    public boolean step(Position start, Position finish, Board board) {
        if( start.y != 0 && start.y != 7 && (start.x == finish.x || finish.y-start.y == 1) ) {
            if( start.x == finish.x ) {
                if( finish.y-start.y == 2 || finish.y-start.y == 1 ) {
                    if( finish.y-start.y == 2 ) {
                        if( start.y != 1 || start.y != 6 ) {
                            return false;
                        }
                    }
                } else {
                    return false;
                }
            } else {
                if(board.board[finish.x][finish.y] == null) {
                    return false;
                }
            }
            if(board.board[finish.x][finish.y] != null) {
                if(board.board[finish.x][finish.y].getColor() == color) {
                    return false;
                } else {
                    return true;
                }
            } else {
                return true;
            } 
        } else {
            return false;
        }
    }

    public String getColor() {
        return color;
    }
}
