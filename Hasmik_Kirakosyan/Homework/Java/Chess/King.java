/* File name : King.java */

public class King implements Piece {
 	public boolean step (String pos1, String pos2) {
		int i1 = Character.getNumericValue(pos1.charAt(0)) - 64;
		int j1 = Character.getNumericValue(pos1.charAt(1));
		int i2 = Character.getNumericValue(pos2.charAt(0)) - 64;	
		int j2 = Character.getNumericValue(pos2.charAt(1));	
		
		return ( (Math.abs(i1-i2) == 1 && Math.abs(j1-j2) == 0) || 
				   (Math.abs(j1-j2) == 1 && Math.abs(i1-i2) == 0) ||
					(Math.abs(j1-j2) == 1 && Math.abs(i1-i2) == 1) );		 
	}
}
