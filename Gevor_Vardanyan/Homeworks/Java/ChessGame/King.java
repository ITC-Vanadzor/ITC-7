public class King implements Piece {
    public boolean step (int row1, int col1, int row2, int col2, String [][]) {
		if ((Math.abs(row1-row2) == 1 && col2 == col1) || (Math.abs(col1-col2) == 1 && row2 == row1) || (Math.abs(row1-row2) == 1 && Math.abs(col1-col2) == 1)) {
			String col1 = Integer.toString(col1);
			String col2 = Integer.toString(col2);
			String row1 = Integer.toString(row1);
			String row2 = Integer.toString(row2);
			return (row2 =="wRook  " || row2 =="bRook  " || row2 =="wPawn  " || row2 =="bPawn  " || row2 =="wQueen " || row2 =="wQueen "|| row2 =="wKnight" || row2 =="bKnight" || row2 =="wBishop" || row2 =="bBishop" );
				
		}
    }

}
