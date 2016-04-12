/* File name : King.java */

public class King extends SetCoordinates implements Piece {
 	public boolean step (String pos1, String pos2) {
		changeToInts(pos1, pos2);	
		return ( (Math.abs(i1-i2) == 1 && Math.abs(j1-j2) == 0) || 
				   (Math.abs(j1-j2) == 1 && Math.abs(i1-i2) == 0) ||
					(Math.abs(j1-j2) == 1 && Math.abs(i1-i2) == 1) );		 
	}
}
