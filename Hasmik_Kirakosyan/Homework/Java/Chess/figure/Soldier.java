/* File name : Soldier.java */

package Chess.figure;
import Chess.board.*;

public class Soldier extends figure implements Piece {

    public Soldier(Board board1, String initPos, String color1) {
        super(initPos, board1);
        board = board1.getBoard();
        color = color1;
        mark = 'S';
    }

    public void step (String pos2) {
        changeToInts(pos2);		
        if  (((i2-posCol) == 1 || (i2-posCol) == 2) && (posRow-j2) == 0) {
            if (board[j2][i2] == null) {
                changePos(i2, j2);
            }
            else if (board[j2][i2].color != color) {
                changePos(i2, j2);
            }
        }
        return;  
    }
}
