
import myUtil.*;
import game.*;
import figure.*;

class Chess {
	public static void main(String [] args) {
		
		Position pos=new Position();
		Piece queen=new Queen();
		Piece rook=new Rook();
		Piece knight=new Knight();

		pos.setPosition('a',1);
		Board.set(pos,queen);

		pos.setPosition('a',2);
		Board.set(pos,rook);

		pos.setPosition('a',3);
		Board.set(pos,knight);

		knight.setColour(true);


		System.out.println("Rook step:"+rook.step(pos));
		

	}
}