package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Queen implements Piece {
    private String color;
    public Queen(String c) {
        color = c;
    }

    public boolean step(Position start, Position finish, Board board) {
        if( start.x == finish.x || start.y == finish.y || ( Math.abs(start.x-finish.x) == Math.abs(start.y-finish.y) )) {
            if( start.x == finish.x ) {
                if ( start.y > finish.y ) {
                    for(int i=start.y-1; i > finish.y; --i) {
                        System.out.println(board.board[start.x][i]);
                        if(board.board[start.x][i] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=start.y+1; i < finish.y; ++i) {
                        if(board.board[start.x][i] != null) {
                            return false;
                        }
                    }
                }
            } else if ( start.y == finish.y ) {
                if(finish.x > start.x) {
                    for(int i=start.x+1; i < finish.x; ++i) {
                        if(board.board[i][start.y] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=start.x-1; i > finish.x; --i) {
                        if(board.board[i][start.y] != null) {
                            return false;
                        }
                    }
                } 
            } else {
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
            }
            if(board.board[finish.x][finish.y] != null) {
                System.out.println(board.board[finish.x][finish.y].getColor());
                System.out.println(color);
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
