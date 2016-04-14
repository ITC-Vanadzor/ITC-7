/* File name : Elephant.java */
package Chess.figure;
public class Elephant extends figure implements Piece {
		  private Piece [][] board;

		  public Elephant(Piece[][] board1, String initPos) {
					 super(initPos);
					 board = board1;
		  }
		  public boolean step (String pos2) {
					 changeToInts(pos2);	
					 System.out.println("Elepahant info : curCol =" +posCol+", curRow ="+posRow+" i2 = "+i2+" j2 = "+j2);
					 int deltaRow;
					 int deltaCol;
					 if (Math.abs(posCol-i2) == Math.abs(posRow-j2) ) {
					   deltaRow = (posRow > j2)? -1: 1;
						deltaCol = (posCol > i2)? -1: 1;
					   for (int i = posCol+deltaCol, j = posRow+deltaRow; i != i2 && j != j2; i+=deltaCol, j+=deltaRow) {
								  if (board[i][j] != null) return false;
						}
		 				posCol = i2;
						posRow = j2;
						return true;				
					 }
					 else return false;		 
		  }
		  public void getPositions() {
					 System.out.println("Elephant position : " +posRow+", "+posCol);
		  }

}
