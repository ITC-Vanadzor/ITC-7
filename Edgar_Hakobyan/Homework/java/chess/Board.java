package chess;

import chess.figure.Figure;

public class Board {
    private final int size=8;
    private int posX;
    private int posY;
    protected int posStartX;
    protected int posStartY;
    protected int posFinishX;
    protected int posFinishY;
    private Figure[][] board;

    public Board() {
        board = new Figure[size][size];
    }

    public void setFigure(Figure figure, Position pos) {
        changePos(pos);        
        if (board[posX][posY] == null) {
            board[posX][posY] = figure;
        } else {
            System.out.println("field already busy");
        }
    }

    public Figure[][] getBoard() {
        return board;
    }
    	
    public void moveFigure(Figure figure, Position start, Position finish) {
        changeToInt(start,finish);
        board[posFinishX][posFinishY] = figure;
        board[posStartX][posStartY] = null;
    }     
    
    public void changePos(Position pos) {
        posX = 8-pos.posY();
        posY = pos.posX()-65;
    }

    private void changeToInt(Position start,Position finish) {
        posStartX = 8-start.posY();
        posStartY = start.posX()-65;
        posFinishX = 8-finish.posY();
        posFinishY = finish.posX()-65;
    }

    public void prinBoard() {
        for(int i=0; i<8; ++i) {
            for(int j=0; j<8; ++j) {
                if(board[i][j] != null) {
                    System.out.print(board[i][j].getColor() + " " + board[i][j].getClass());
                } else {
                    System.out.print(board[i][j] + " ");
                }
            }
                System.out.println();
        }
    }    
}
