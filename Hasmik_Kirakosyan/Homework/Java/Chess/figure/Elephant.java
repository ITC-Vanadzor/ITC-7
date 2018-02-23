/* File name : Elephant.java */
package Chess.figure;
import  Chess.board.*;
public class Elephant extends figure implements Piece {

    public Elephant(Board board1, String initPos, String color1) {
        super(initPos, board1);
        color = color1;
        mark = 'E';
    }

    public void step (String pos2) {
        changeToInts(pos2);	
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
