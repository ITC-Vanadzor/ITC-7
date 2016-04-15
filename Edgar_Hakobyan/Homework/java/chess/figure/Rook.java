package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Rook implements Piece {
    private String color;
    public Rook(String c) {
        color = c;
    }

    public boolean step(Position start, Position finish, Board board) {
        if( start.x == finish.x || start.y == finish.y) {
            if(start.x == finish.x) {
                if(finish.y > start.y) {
                    for(int i=start.y+1; i < finish.y; ++i) {
                        System.out.println(board.board[start.x][i]);
                        if(board.board[start.x][i] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int i=start.y-1; i > finish.y; --i) {
                        System.out.println(board.board[start.x][i]);
                        if(board.board[start.x][i] != null) {
                            return false;
                        }
                    }
                }
            } else {
                if(finish.x > start.x) {
                    for(int j=start.x+1; j < finish.x; ++j) {
                        System.out.println(board.board[j][start.y]);
                        if(board.board[j][start.y] != null) {
                            return false;
                        }
                    }
                } else {
                    for(int j=start.x-1; j > finish.x; --j) {
                        if(board.board[j][start.y] != null) {
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
