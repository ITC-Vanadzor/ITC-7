package Chess.figure;

public class Position {
	char col;
	int row;
	public Position (String position) {
		col = Character.getNumericValue(position.charAt(0))-9;	
		row = Character.getNumericValue(position.charAt(1))-1;					  	
	}
}
