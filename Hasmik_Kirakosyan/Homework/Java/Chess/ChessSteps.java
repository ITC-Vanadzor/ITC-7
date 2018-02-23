/* Filename : ChessSteps */
package  Chess;

import Chess.figure.*;
import Chess.board.*;
public class ChessSteps {

	public static void main (String args[]) {
		Board board = new Board();
	    Soldier soldier = new Soldier(board, "D1", "white");
        Soldier soldier1 = new Soldier(board, "D2", "black");
		Rook rook = new Rook(board, "A1", "black");
		Bishop bishop = new Bishop(board,"C4", "black" );
		Elephant elephant =  new Elephant(board, "D5", "white");
		King king = new King(board, "D8", "white");
		Queen queen = new Queen(board, "C8", "white");
			
        board.printBoard();
        board.setFigure(soldier);
        board.setFigure(soldier1);
        board.setFigure(rook);
        board.setFigure(bishop);
        board.setFigure(elephant);
        board.setFigure(king);
        board.setFigure(queen);
        board.printBoard();
        // tests 
        
		 soldier.step("D2"); 
         rook.step("A3");
         bishop.step("B2");
         elephant.step("B3");
         king.step("C7");
         queen.step("B7");

        board.printBoard();
    }
}
