/* File name : Elephant.java */

public class Elephant extends SetCoordinates implements Piece {
 	public boolean step (String pos1, String pos2) {
 	changeToInts(pos1, pos2);	
		return (Math.abs(i1-i2) == Math.abs(j1-j2));		 
	}
}
