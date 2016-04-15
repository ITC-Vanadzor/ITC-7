/* Filename : ChessSteps */
package  Chess;

import Chess.figure.*;

public class ChessSteps {

	public static void main (String args[]) {
		Piece [][] board = new Piece[8][8];
	    board[0][3] = new Soldier(board, "D1");
		board[0][0] = new Rook(board, "A1");
		board[3][2] = new Bishop(board,"C4" );
		board[4][3]=  new Elephant(board, "D5");
		board[7][3] = new King(board, "D8");
		board[7][2] = new Queen(board, "C8");
			
		// tests 
		System.out.println("Soldier step test : " + board[0][3].step("D2")); // true
		System.out.println("Rook step test : " + board[0][0].step("A3")); // true
		board[2][0].getPositions();
		System.out.println("Bishop step test : " + board[3][2].step("B2")); // true
		board[1][1].getPositions();
		System.out.println("Elephant step test : " + board[4][3].step("B3")); // true
		board[2][1].getPositions();
		System.out.println("King step test : " + board[7][3].step("C7")); // true
        board[6][2].getPositions();
		System.out.println("Queen step test : " + board[7][2].step("B7")); // true
        		
	}
}
