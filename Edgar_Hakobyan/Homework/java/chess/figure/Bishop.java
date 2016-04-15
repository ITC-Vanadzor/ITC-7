package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Bishop implements Piece {
    private String color;
    public Bishop(String c) {
        color = c;
    }

    public boolean step(Position start, Position finish, Board board) {
        if ( Math.abs(start.x-finish.x) == Math.abs(start.y-finish.y) ) {
            if( finish.x-start.x > 0 && finish.y-start.y > 0 ) {
                for(int i=start.x+1,j=start.y+1; i < finish.x; ++i,++j) {
                    if(board.board[i][j] != null) {
                        return false;
                    }
                }
            } else if( finish.x-start.x > 0 && finish.y-start.y < 0 ) {
                for(int i=start.x+1,j=start.y-1; i < finish.x; ++i,--j) {
                    if(board.board[i][j] != null) {
                        return false;
                    }
                }
            } else if( finish.x-start.x < 0 && finish.y-start.y < 0 ) {
                for(int i=start.x-1,j=start.y-1; i > finish.x; --i,--j) {
                    if(board.board[i][j] != null) {
                        return false;
                    }
                }
            } else {
                for(int i=start.x-1,j=start.y+1; i > finish.x; --i,++j) {
                    if(board.board[i][j] != null) {
                        return false;
                    }
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
