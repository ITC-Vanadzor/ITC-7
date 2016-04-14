package chess;

import chess.figure.*;
import chess.Position;
import chess.Board;

public class Chess {
	public static void main(String[] args) {
		Board board = new Board();
//		Piece[][] board = new Piece[8][8];
		
		King kingBlack = new King("black");
        board.setFigure(kingBlack,new Position(5,2));
		
		Queen queenBlack = new Queen("black");
        board.setFigure(queenBlack,new Position(6,6));

		Rook rookBlack = new Rook("black");
        board.setFigure(rookBlack,new Position(1,1));

		Bishop bishopBlack = new Bishop("black");
		board.setFigure(bishopBlack,new Position(3,5));
	
		Knight knightBlack = new Knight("black");
		board.setFigure(knightBlack,new Position(5,3));	

		Pawn pawnBlack = new Pawn("black");
        board.setFigure(pawnBlack,new Position(1,2));
		
//		board.setFigure(e_b,new Position(3,3));
//		System.out.println(board.board[3][3]);
//		System.out.println(board.board[0][3]);
//		System.out.println(board.board[3][3]);
		//Elephant e = new Elephant();
		System.out.println(bishopBlack.step(new Position(3,5), new Position(5,5), board));
		System.out.println(rookBlack.step(new Position(1,1), new Position(5,5), board));
		System.out.println(kingBlack.step(new Position(5,2), new Position(6,3), board));
		System.out.println(queenBlack.step(new Position(6,6), new Position(8,8), board));
		System.out.println(knightBlack.step(new Position(5,3), new Position(7,4), board));
		System.out.println(pawnBlack.step(new Position(1,2), new Position(1,3), board));
	}
}
