package Chess;

import java.util.Scanner;
import Chess.Figures.*;
import Chess.ChessBoard.*;

public class Chess {
    public static void main (String[] avgs) {

	Board board = new Board();
	
	Scanner reader = new Scanner(System.in);
	System.out.print("Enter White King position ");
	String positionForWhiteKing = reader.next().toUpperCase();
	System.out.print("Enter Black Rook position ");
	String positionForBlackRook = reader.next().toUpperCase();
	System.out.print("Enter White Bishop position ");
	String positionForWhiteBishop = reader.next().toUpperCase();
	System.out.print("Enter Black Pawn position ");
	String positionForBlackPawn = reader.next().toUpperCase();
	System.out.print("Enter White Queen position ");
	String positionForWhiteQueen = reader.next().toUpperCase();
	
	Cell startWhiteKing = new Cell(positionForWhiteKing);
	Cell startBlackRook = new Cell(positionForBlackRook);
	Cell startWhiteBishop = new Cell(positionForWhiteBishop);
	Cell startBlackPawn = new Cell(positionForBlackPawn);
	Cell startWhiteQueen = new Cell(positionForWhiteQueen);


    // white ='W' , black = 'B'
	King whiteKing = new King(startWhiteKing, 'W');
	Rook blackRook = new Rook(startBlackRook, 'B');
	Bishop whiteBishop = new Bishop(startWhiteBishop, 'W');
	Pawn blackPawn = new Pawn(startBlackPawn, 'B');
	Queen whiteQueen = new Queen(startWhiteQueen, 'W');
	
	
	
	//System.out.println("The figure King --" + whiteKing.step(52, 67));

	board.printBoard();
	System.out.print("Go to position ");
	String positionFinish = reader.next().toUpperCase();
	Cell finish = new Cell(positionFinish);
	
	System.out.println("The figure White King --" + whiteKing.step(finish));
	System.out.println("The figure Black Rook --" + blackRook.step(finish));
	System.out.println("The figure White Bishop --" + whiteBishop.step(finish));
	System.out.println("The figure Black Pawn --" + blackPawn.step(finish));
	System.out.println("The figure White Queen --" + whiteQueen.step(finish));
    }

}
