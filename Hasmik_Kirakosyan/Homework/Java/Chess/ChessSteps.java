/* Filename : ChessSteps */
package  Chess;

import Chess.figure.*;
import Chess.board.*;
public class ChessSteps {

	public static void main (String args[]) {
		Board board = new Board();
	    Soldier soldier = new Soldier(board, "D1", "white");
		Rook rook = new Rook(board, "A1", "black");
		Bishop bishop = new Bishop(board,"C4", "black" );
		Elephant elephant =  new Elephant(board, "D5", "white");
		King king = new King(board, "D8", "white");
		Queen queen = new Queen(board, "C8", "white");
			
        board.printBoard();
        board.setFigure(soldier);
        board.setFigure(rook);
        board.setFigure(bishop);
        board.setFigure(elephant);
        board.setFigure(king);
        board.setFigure(queen);
        board.printBoard();
        // tests 
        
		System.out.println("Soldier step test : " + soldier.step("D2")); // true
        board.setFigure(new Soldier(board, "D2", "black"));
        figure f = board.getFigure("D2");
        System.out.println(f.getRow());
	/*	System.out.println("Rook step test : " + board[0][0].step("A3")); // true
		System.out.println("Bishop step test : " + board[3][2].step("B2")); // true
		System.out.println("Elephant step test : " + board[4][3].step("B3")); // true
		System.out.println("King step test : " + board[7][3].step("C7")); // true
        System.out.println("Queen step test : " + board[7][2].step("B7")); // true		
      */  
        board.printBoard();
    }
}
