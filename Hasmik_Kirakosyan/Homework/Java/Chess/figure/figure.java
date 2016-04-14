/* File name : SetCoordinates */

package Chess.figure;

public class figure {
	protected int posRow, posCol;
   protected int	i2, j2;

	public figure (String curPos) {
			  posRow = Character.getNumericValue(curPos.charAt(0)) - 10;
           posCol = Character.getNumericValue(curPos.charAt(1)) - 1;				
	}
	public void changeToInts(String pos2) {
		i2 = Character.getNumericValue(pos2.charAt(1))-1;	
		j2 = Character.getNumericValue(pos2.charAt(0))-10;					  			  
	};
}
