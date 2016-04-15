/* File name : Horse.java */
package Chess.figure;
import Chess.board.*;

public class Bishop extends figure  implements Piece {
    
    public Bishop(Board board1, String initPos, String color1) {
        super(initPos, board1);
        color = color1;
        mark = 'B';
    }

    public boolean step (String pos2) {
        changeToInts(pos2);
        if ( (Math.abs(posCol-i2) == 2 && Math.abs(posRow-j2) == 1  ||
                    Math.abs(posRow-j2) == 2 && Math.abs(posCol-i2) == 1) && board[i2][j2]==null && board[i2][j2].color!=color) {
            changePos(i2, j2);
            return true;
        }
        else return false;		 
    }
    public void getPositions() {
        System.out.println("Bishop position : " +posCol+", "+posRow);
    }

}
