/* File name : Queen.java */
package Chess.figure;
import 
public class Queen extends figure implements Piece{
		public boolean step (String pos1, String pos2) {
		changeToInts(pos1, pos2);
		return ( ((i1-i2) != 0 && (j1-j2) == 0)   ||
					((j1-j2) != 0 && (i1-i2) == 0) ) ||
				  ( Math.abs(i1-i2) == Math.abs(j1-j2));		 
	}
}
