/* File name : Rook.java */
package Chess.figure;

public class Rook extends figure implements Piece {
		  private Piece [][] board;

		  public Rook(Piece[][] board1) {
					 board = board1;
		  }

		  public boolean step (String pos1, String pos2) {
					 changeToInts(pos1, pos2);
					 if ( ((i1-i2) != 0 && (j1-j2) == 0)  ||
										  ((j1-j2) != 0 && (i1-i2) == 0) 
						 ) {
								int delta;
								if ((i1 < i2) || (j1 < j2)) { 
										  delta = 1;			
								}
								else delta = -1;
								for (int i = i1, j = 0; i < i2; i+=delta) {
										  if (board[i][j]!=null) return false;
								}
								for (int j = j1, i = i1-1; j < j2+1; j+=delta) {
										  if (board[i][j]!=null) return false;
								} 
								return true;
						 }
					 else return false;		
		  }
}
