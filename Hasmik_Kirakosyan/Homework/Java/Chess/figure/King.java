/* File name : King.java */
package Chess.figure;

public class King extends figure implements Piece {

    public King(Piece[][] board1, String initPos) {
        super(initPos);
        board = board1;
    }

    public boolean step (String pos2) {
        changeToInts(pos2);	
        if (( Math.abs(posCol-i2) == 1 && Math.abs(posRow-j2) == 0 || 
                    Math.abs(posRow-j2) == 1 && Math.abs(posCol-i2) == 0  ||
                    Math.abs(posRow-j2) == 1 && Math.abs(posCol-i2) == 1 ) && board[i2][j2]==null) {
            changePos(i2, j2);
            return true;
                    }
        else return false;        
    }
    public void getPositions() {
        System.out.println("King position : " +posRow+", "+posCol);
    }

}
