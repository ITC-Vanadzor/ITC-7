/* File name : Rook.java */

package Chess.figure;

public class Rook extends figure implements Piece {

    public Rook(Piece[][] board1, String initPos) {
        super(initPos);
        board = board1;
    }

    public boolean step (String pos2) {
        changeToInts(pos2);
        if ( ((posCol-i2) != 0 && (posRow-j2) == 0)  ||
                ((posRow-j2) != 0 && (posCol-i2) == 0) 
           ) {
            int delta;
            if ((posCol < i2) || (posRow < j2)) { 
                delta = 1;			
            }
            else delta = -1;
            for (int i = posCol+delta, j = posRow; i < i2+1; i+=delta) {
                if (board[i][j]!=null) return false;
            }
            for (int j = posRow+delta, i = posCol; j < j2+1; j+=delta) {
                if (board[i][j]!=null) return false;
            }
            changePos(i2, j2);
            return true;
           }
        else return false;		
    }
    public void getPositions() {
        System.out.println("Rook position : " +posRow+", "+posCol);
    }

}
