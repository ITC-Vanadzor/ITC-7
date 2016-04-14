/* File name : Soldier.java */

package Chess.figure;

public class Soldier extends figure implements Piece {
		  int posRow;
		  int posCol;
		  public boolean step (String pos2) {
					 changeToInts(pos2);		
					 if ( (((Math.abs(posCol-i2) == 1) || (Math.abs(posCol-i2) == 2)) && (Math.abs(posRow-j2) == 0) ) ||
										  (((Math.abs(posRow-j2) == 1) || (Math.abs(posRow-j2) == 2)) && (Math.abs(posCol-i2) == 0)) ) { 
								posRow = j2;
								posCol = i2;
								return true;
					 }
					 else return false;  
		  }

	public void getPositions() {
			  System.out.println("Soldier position : " +posRow+", "+posCol);
	}
}
