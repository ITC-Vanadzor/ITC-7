public class ParsingColRow {
    int col;
    int row;
    
    public ParsingColRow (String step) {
        validString(step);
        col = (int)step.charAt(0) -64; //ASCII
        validCol(col);
        row = (int)step.charAt(1) - 48; //ASCII
        validRow(row);
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
        if (col < 1 || col >8) {
            exitToProgram();
        }
    }
    public void exitToProgram() {
          System.out.println("Incorrect positions!! Please try again");
            System.exit(0);
        }

}
