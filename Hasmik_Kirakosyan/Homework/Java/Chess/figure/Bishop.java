/* File name : Horse.java */

package Chess.figure;
public class Bishop extends figure  implements Piece {

    public Bishop(Piece[][] board1, String initPos) {
        super(initPos);
        board = board1;
    }

    public boolean step (String pos2) {
        changeToInts(pos2);
        if ( (Math.abs(posCol-i2) == 2 && Math.abs(posRow-j2) == 1  ||
                    Math.abs(posRow-j2) == 2 && Math.abs(posCol-i2) == 1) && board[i2][j2]==null) {
            changePos(i2, j2);
            return true;
        }
        else return false;		 
    }
    public void getPositions() {
        System.out.println("Bishop position : " +posCol+", "+posRow);
    }

}
