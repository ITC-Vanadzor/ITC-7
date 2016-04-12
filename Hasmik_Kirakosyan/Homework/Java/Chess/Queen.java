/* File name : Queen.java */

public class Queen extends SetCoordinates implements Piece{
		public boolean step (String pos1, String pos2) {
	   //changeToInts(pos1, pos2);
		int i1 = Character.getNumericValue(pos1.charAt(0)) - 64;
		int j1 = Character.getNumericValue(pos1.charAt(1));
		int i2 = Character.getNumericValue(pos2.charAt(0)) - 64;	
		int j2 = Character.getNumericValue(pos2.charAt(1));	
		
		return ( ((i1-i2) != 0 && (j1-j2) == 0)   ||
					((j1-j2) != 0 && (i1-i2) == 0) ) ||
				  ( Math.abs(i1-i2) == Math.abs(j1-j2));		 
	}
}
