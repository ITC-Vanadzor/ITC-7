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

    public boolean step (String pos2) {
        changeToInts(pos2);		
        if  (((i2-posCol) == 1 || (i2-posCol) == 2) && (posRow-j2) == 0 /*&& board[i2][j2].color!=color*/) { 
            System.out.println(i2);
            System.out.println(j2);
            //changePos(i2, j2);
            board[i2][j2] = board[posCol][posRow];
            board[posCol][posRow]=null;
            posCol = i2;
            posRow = j2;
            return true;
        }
        else return false;  
    }

    public void getPositions() {
        System.out.println("Soldier position : " +posRow+", "+posCol);
    }
}
