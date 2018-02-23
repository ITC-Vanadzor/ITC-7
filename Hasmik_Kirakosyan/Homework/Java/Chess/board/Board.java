package Chess.board;

import Chess.*;
import Chess.figure.*;

public class Board {
    private final int size = 8;
    private figure[][] board;
    private int row;
    private int col;

    public Board() {
        board = new figure[size][size];
    }
    
    public figure[][] getBoard() {
        return board;
    }
    public void setFigure(figure figure){
        int i = figure.getRow();
        int j = figure.getCol();
        board[i][j] = figure;
    }

    public  figure getFigure (String position) {
        int i = Character.getNumericValue(position.charAt(1))-1;
        int j = Character.getNumericValue(position.charAt(0))-10;
        return board[i][j];
    }

    public void printBoard() {
        System.out.println("  A B C D E F G H");
        StringBuffer output = new StringBuffer("");
        for (int j = 0; j < size; ++j) {
            output.append(j+1).append(" ");
            for (int i = 0; i < size; ++i) {
                if (board[i][j] == null) {
                    output.append("_ ");
                } else {
                    output.append(board[i][j].getMark()).append(" ");
                }
            }
            System.out.println(output);
            output.replace(0, 18, "");
        }
        System.out.println("King = 'K',  Queen = 'Q',  Rook = 'R',  Bishop = 'B',  Elephant = 'E',  Soldier = 'S' ");
    }
}
