/* File name : SetCoordinates */

package Chess.figure;
import Chess.board.*;

public class figure {
    protected int posRow;
    protected int posCol;
    protected int i2;
    protected int j2;
    protected char mark;
    protected figure[][] board;
    protected String color;

    public figure (String curPos, Board board1) {
        posRow = Character.getNumericValue(curPos.charAt(0)) - 10;
        posCol = Character.getNumericValue(curPos.charAt(1)) - 1;
        board = board1.getBoard();        
    }
    public void changeToInts(String pos2) {
        i2 = Character.getNumericValue(pos2.charAt(1))-1;	
        j2 = Character.getNumericValue(pos2.charAt(0))-10;					  			  
    };
    
    protected void changePos (int newCol, int newRow) {
        board[j2][i2] = this;
        board[posRow][posCol] = null;
        posCol = i2;
        posRow = j2;
    }

    public int getRow() {
        return posRow;
    }

    public int getCol() {
        return posCol;
    }
    public char getMark() {
        return mark;
    }
}
