/* File name : Horse.java */

public class Horse extends SetCoordinates implements Piece {
 	public boolean step (String pos1, String pos2) {
		changeToInts(pos1, pos2);
		return ( (Math.abs(i1-i2) == 2 && Math.abs(j1-j2) == 1)  ||
				   (Math.abs(j1-j2) == 2 && Math.abs(i1-i2) == 1) );		 
	}
}
