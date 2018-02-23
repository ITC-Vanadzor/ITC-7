package Chess.ChessBoard;

import Chess.Figures.*;

public class Cell {
    public int row;
    public int col;
 
    public Cell (String position) {
        ParsingColRow pos = new ParsingColRow(position);
	    this.col = pos.col;	
	    this.row = pos.row;
    }  
    
    public static boolean equalsCells(Cell obj1, Cell obj2) {
        if (obj1 != null && obj2 != null) {
            if (obj1.row == obj2.row && obj1.col == obj2.col) {
                return true;
            }
        } 
        return false;
    }
}
