package Chess.ChessBoard;

import Chess.Figures.*;

public class Board {
    public static Figure[][] area;
   
    public Board() {
        area = new Figure[8][8];
    }
    
    public static void setFigureToBoard(Figure figure){
        int row = figure.getStartRow();
        int col = figure.getStartColumn();
        area[row][col] = figure;
    }
    
    public static Figure getFigure (Cell position) {
    //System.out.println(position.row + "  " + position.col);
        return area[position.row][position.col];
    }
    
    public void printBoard() {
        System.out.println("  A B C D E F G H");
        StringBuffer output = new StringBuffer("");
        for (int i = 0; i < 8; ++i) {
            output.append(i+1).append(" ");
            for (int j = 0; j < 8; ++j) {
                if (area[i][j] == null) {
                    output.append("_ ");
                } else {
                    output.append(area[i][j].shorthand).append(" ");
                }
            }
            System.out.println(output);
            output.replace(0, 18, "");
        }
        System.out.println("King = 'K',  Queen = 'D',  Rook = 'T',  Bishop = 'L',  Knight = 'R',  Pawn = 'P' ");
        System.out.println("White figure is upper letter");
    }
   
   
    
}
