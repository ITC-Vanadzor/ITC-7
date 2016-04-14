import java.util.Scanner;
public class Chess {
    public static void main (String[] avgs) {

	Board board = new Board();
	
	Scanner reader = new Scanner(System.in);
	System.out.print("Enter White King position ");
	String positionForWhiteKing = reader.next().toUpperCase();
	System.out.print("Enter Black Rook position ");
	String positionForBlackRook = reader.next().toUpperCase();
	System.out.print("Enter White Rook position ");
	String positionForWhiteRook = reader.next().toUpperCase();
	
	Cell startWhiteKing = new Cell(positionForWhiteKing);
	Cell startBlackRook = new Cell(positionForBlackRook);
	Cell startWhiteRook = new Cell(positionForWhiteRook);

    // white ='W' , black = 'B'
	King whiteKing = new King(startWhiteKing, 'W');
	Rook blackRook = new Rook(startBlackRook, 'B');
	Rook whiteRook = new Rook(startBlackRook, 'W');
	
	board.setFigureToBoard(whiteKing);
	board.setFigureToBoard(blackRook);
	board.setFigureToBoard(whiteRook);
	
	System.out.println("The figure King --" + whiteKing.step(52, 67));

	board.printBoard();
	
    }

}
