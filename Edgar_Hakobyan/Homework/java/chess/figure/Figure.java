package chess.figure;

import chess.Board;
import chess.Position;

public class Figure {
    protected String color;
    protected Figure[][] board;
    protected int posStartX;
    protected int posStartY;
    protected int posFinishX;
    protected int posFinishY;
     
    public Figure(Board board1) {
        board = board1.getBoard();
    }

    protected void changeToInt(Position start,Position finish) {
        posStartX = 8-start.posY();
        posStartY = start.posX()-65;
        posFinishX = 8-finish.posY();
        posFinishY = finish.posX()-65;
    }

    protected boolean isSameColor(int posX, int posY) {
        return (board[posX][posY].getColor() == color);
    }
    
    public String getColor() {
        return color;
    }
}
