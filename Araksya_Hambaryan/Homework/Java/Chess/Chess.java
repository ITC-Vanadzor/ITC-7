import java.util.Scanner;
public class Chess {
    public static void main (String[] avgs) {

	// Input steps
	Scanner reader = new Scanner(System.in);
	System.out.print("Enter positions ");
	String position1 = reader.next().toUpperCase();
	String position2 = reader.next().toUpperCase();
	// Steps Validation
	if (position1.length() != 2 && position2.length() != 2) {
	    exitToProgramm();
	}
	// 'Coordinates' to steps
	int col1 = (int)position1.charAt(0);
	int row1 = (int)position1.charAt(1);
	int col2 = (int)position2.charAt(0);
	int row2 = (int)position2.charAt(1);
	//Steps validation ASCE code A=65, H=72, '8'=56
	if (col1 < 65 || col1 >72 || col2 <65 || col2>72 || row1 >56 || row2>56) {
	    exitToProgramm();
	}

	figures(row1, col1, row2, col2);
    }

	static void exitToProgramm() {
	  System.out.println("Incorrect positions!! Please try again");
	    System.exit(0);
	}
	static void figures(int row1, int col1, int row2, int col2) {
	    King newKing = new King();
	    System.out.println("The figure King --" + newKing.step(row1, col1, row2, col2));
	    
	    Rook newRook = new Rook();
	    System.out.println("The figure Rook --" + newRook.step(row1, col1, row2, col2));

	    Bishop newBishop = new Bishop();
	    System.out.println("The figure Bishop --" + newBishop.step(row1, col1, row2, col2));

	    Knight newKnight = new Knight();
	    System.out.println("The figure Knight --" + newKnight.step(row1, col1, row2, col2));

	    Pawn newPawn = new Pawn();
	    System.out.println("The figure Pawn --" + newPawn.step(row1, col1, row2, col2));
    }
}
