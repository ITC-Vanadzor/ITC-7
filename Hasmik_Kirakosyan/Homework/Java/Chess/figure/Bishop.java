/* File name : Horse.java */

package Chess.figure;
public class Bishop extends figure  implements Piece {
		  private Piece [][] board;

		  public Bishop(Piece[][] board1) {
					 board = board1;
		  }


		  public boolean step (String pos1, String pos2) {
					 changeToInts(pos1, pos2);
					 System.out.println("\n i1 : "+i1+" j1 : "+j1+" i2 :"+i2+" j2 : "+j2);
					 return ( ((Math.abs(i1-i2) == 2 && Math.abs(j1-j2) == 1)  ||
													 (Math.abs(j1-j2) == 2 && Math.abs(i1-i2) == 1) ) &&
										  board[i2-1][j2-1]==null);		 
		  }
}
