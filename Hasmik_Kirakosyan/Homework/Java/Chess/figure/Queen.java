/* File name : Queen.java */
package Chess.figure;
import Chess.board.*;

public class Queen extends figure implements Piece{

    public Queen(Board board1, String initPos, String color1) {
        super(initPos, board1);
        color = color1;
        mark = 'Q';
    }

    public void step (String pos2) {
        changeToInts(pos2);		

        // queen as rook 
        if ( ((posCol-i2) != 0 && (posRow-j2) == 0)  ||
                ((posRow-j2) != 0 && (posCol-i2) == 0) 
           ) {
            int delta;
            if ((posCol < i2) || (posRow < j2)) { 
                delta = 1;			
            }
            else delta = -1;
            for (int i = posRow+delta, j = posCol; i < i2+1; i+=delta) {
                if (board[i][j] != null) return;
            }
            for (int j = posCol+delta, i = posRow; j < j2+1; j+=delta) {
                if (board[i][j] != null) return;
            }
            if (board[j2][i2]== null) { 
                changePos(i2, j2);
            }
            else if (board[j2][i2].color != color) {
                changePos(i2, j2);
            }
        }
        // queen as elephant

        if (Math.abs(posCol-i2) == Math.abs(posRow-j2) ) {
            int deltaRow = (posRow > j2)? -1: 1;
            int deltaCol = (posCol > i2)? -1: 1;
            for (int i = posCol+deltaRow, j = posRow+deltaRow; i != i2 && j != j2; i+=deltaCol, j+=deltaRow) {
                if (board[i][j] != null) return;
            }
            if (board[j2][i2] == null){
               changePos(i2, j2);
            }
            else if(board[j2][i2].color!=color) {
            changePos(i2, j2);
            }
        }
        return;		 
    }
}
