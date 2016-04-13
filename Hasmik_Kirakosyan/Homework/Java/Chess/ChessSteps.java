/* Filename : ChessSteps */
package Chess;
import Chess.figure.*;

public class ChessSteps {

	public static void main (String args[]) {
		Soldier soldier = new Soldier();
		Rook rook = new Rook();
		Horse horse = new Horse();
		Elephant elephant = new Elephant();
		King king = new King();
		Queen queen = new Queen();

		/* tests */
		System.out.println("Soldier step test : " + soldier.step("A2", "A3")); // true
		System.out.println("Rook step test : " + rook.step("A1", "F2")); // false
		System.out.println("Horse step test : " + horse.step("B1", "C3")); // true
		System.out.println("Elephant step test : " + elephant.step("D2", "F4")); // true
		System.out.println("King step test : " + king.step("D2", "D1")); // true
		System.out.println("Queen step test : " + queen.step("D2", "F4")); // true
	}
}
