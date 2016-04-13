/* Filename : ChessSteps */
package  Chess;

import Chess.figure.*;

public class ChessSteps {

	public static void main (String args[]) {
		Piece [][] board = new Piece[8][8];
	   //board[0][3] = new Soldier(board);
		board[0][0] = new Rook(board);
		board[3][2] = new Bishop(board);
	/*	Elephant elephant = new Elephant();
		King king = new King();
		Queen queen = new Queen();
	*/
		
		// tests 
		//System.out.println("Soldier step test : " + board[0][3].step("A2", "A3")); // true
		System.out.println("Rook step test : " + board[0][0].step("A1", "A3")); // true
		System.out.println("Bishop step test : " + board[3][2].step("C4", "B2")); // true
		/*System.out.println("Elephant step test : " + elephant.step("D2", "F4")); // true
		System.out.println("King step test : " + king.step("D2", "D1")); // true
		System.out.println("Queen step test : " + queen.step("D2", "F4")); // true
		*/
	}
}
