package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Knight implements Piece {
    private String color;

    public Knight(String c) {
        color = c;
    }

    public boolean step(Position start, Position finish, Board board) {
        if( ( Math.abs(start.x-finish.x) + Math.abs(start.y-finish.y) ) == 3 ) {
            if( board.board[finish.x][finish.y] != null ) {
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
