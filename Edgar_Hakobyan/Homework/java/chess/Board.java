package chess;

public class Board {
    public Piece[][] board = new Piece[8][8];

    public void setFigure(Piece figure, Position start) {
        if (board[start.x][start.y] == null) {
            board[start.x][start.y] = figure;
        } else {
            System.out.println("field already busy");
        }
    }	
    public void getFigure(Position figure) {
        if( board[figure.x][figure.y] != null) {
            System.out.println("object = " + board[figure.x][figure.y].getClass() );
        } else {
            System.out.println("no object" );
        }
    }

    public void moveFigure(Piece figure, Position start, Position finish) {
        board[finish.x][finish.y] = figure;
        board[start.x][start.y] = null;
    }       
}
