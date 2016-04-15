/* File name : Soldier.java */

package Chess.figure;

public class Soldier extends figure implements Piece {

    public Soldier(Piece[][] board1, String initPos) {
        super(initPos);
        board = board1;
    }
 
    public boolean step (String pos2) {
        changeToInts(pos2);		
        if  (((i2-posCol) == 1 || (i2-posCol) == 2) && (posRow-j2) == 0) { 
            changePos(i2, j2);
            return true;
        }
        else return false;  
    }

    public void getPositions() {
        System.out.println("Soldier position : " +posRow+", "+posCol);
    }
}
