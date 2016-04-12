/* File name : SetCoordinates */
public class SetCoordinates {
	public int i1, j1, i2, j2;
	public void changeToInts(String pos1, String pos2) {
		int i1 = Character.getNumericValue(pos1.charAt(0)) - 64;
		int j1 = Character.getNumericValue(pos1.charAt(1));
		int i2 = Character.getNumericValue(pos2.charAt(0)) - 64;	
		int j2 = Character.getNumericValue(pos2.charAt(1));					  			  
	};
}
