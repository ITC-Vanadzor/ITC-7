/* File name : King.java */
package Chess.figure;
import Chess.board.*;

public class King extends figure implements Piece {

    public King(Board board1, String initPos, String color1) {
        super(initPos, board1);
        color = color1;
        mark = 'K';
    }

    public boolean step (String pos2) {
        changeToInts(pos2);	
        if (( Math.abs(posCol-i2) == 1 && Math.abs(posRow-j2) == 0 || 
                    Math.abs(posRow-j2) == 1 && Math.abs(posCol-i2) == 0  ||
                    Math.abs(posRow-j2) == 1 && Math.abs(posCol-i2) == 1 ) && board[i2][j2]==null && board[i2][j2].color != color) {
            changePos(i2, j2);
            return true;
        }
        else return false;        
    }
    public void getPositions() {
        System.out.println("King position : " +posRow+", "+posCol);
    }

}
