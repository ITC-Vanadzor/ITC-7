package Chess.ChessBoard;

import Chess.Figures.*;

public class ParsingColRow {
    public int col;
    public int row;
    
    public ParsingColRow (String step) {
        validString(step);
        col = (int)step.charAt(0) -65; //ASCII
        validCol(col);
        row = (int)step.charAt(1) - 49; //ASCII
        validRow(row);
        //System.out.println(row + " ASCII " + col);
    }

    public void validString (String step) {
        if (step.length() != 2 && step.length() != 2) {
            exitToProgram();
        }
    }
    
    public void validRow (int row) {
        if (row >8) {
            exitToProgram();
        }
    }
    
    public void validCol (int col) {
        if (col < 0 || col >8) {
            exitToProgram();
        }
    }
    public void exitToProgram() {
          System.out.println("Incorrect positions!! Please try again");
            System.exit(0);
        }

}
