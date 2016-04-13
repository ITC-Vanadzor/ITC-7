
import myUtil.*;
import game.*;
import figure.*;

class Chess {
	public static void main(String [] args) {
		
		Position pos=new Position();
		Piece king=new King();

		pos.setPosition('a',2);
		Board.set(pos,king);

		pos.setPosition('b',1);
		System.out.println("King step:"+king.step(pos));

	}
}