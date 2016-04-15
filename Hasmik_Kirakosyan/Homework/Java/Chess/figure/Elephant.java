/* File name : Elephant.java */
package Chess.figure;
import  Chess.board.*;
public class Elephant extends figure implements Piece {

    public Elephant(Board board1, String initPos, String color1) {
        super(initPos, board1);
        color = color1;
        mark = 'E';
    }

    public boolean step (String pos2) {
        changeToInts(pos2);	
        if (Math.abs(posCol-i2) == Math.abs(posRow-j2) ) {
            int deltaRow = (posRow > j2)? -1: 1;
            int deltaCol = (posCol > i2)? -1: 1;
            for (int i = posCol+deltaCol, j = posRow+deltaRow; i != i2 && j != j2; i+=deltaCol, j+=deltaRow) {
                if (board[i][j] != null) return false;
            }
            if (board[i2][j2].color!=color) {
            changePos(i2, j2);
            return true;
            }
            else return false;        
        }
        else return false;		 
    }
    public void getPositions() {
        System.out.println("Elephant position : " +posRow+", "+posCol);
    }

}
