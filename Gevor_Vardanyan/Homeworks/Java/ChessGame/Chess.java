import java.util.*;
import java.lang.*;
import java.io.*;

public class Chess{
	
	public static void main(String[] args) {

	String[][] board = new String[9][9];
		for (int i = 0; i < board.length; ++i) {
			for (int j = 0; j < board[i].length; ++j) {
			board[i][j] = "       ";
			}
		}
board[0][0] = board[0][7] =  "bRook  ";
board[7][0] = board[7][7] =  "wRook  ";
board[1][0] = board[1][1] = board[1][2] = board[1][7] = board[2][3] =  "bPawn  ";
board[6][0] = board[6][1] = board[6][2] = board[6][5] = board[6][6] = board[6][7] = board[4][3] = "wPawn  ";
board[0][4] = "bKing  ";
board[7][4] = "wKing  ";
board[0][1] = "bQueen ";
board[7][3] = "wQueen ";
board[2][5] = "bKnight";
board[5][2] = board[5][5] = "wKnight";
board[3][1] = board[4][6] = "bBishop";
board[4][0] = board[3][6] = "wBishop";
board[0][8] = "1      ";
board[1][8] = "2      ";
board[2][8] = "3      ";
board[3][8] = "4      ";
board[4][8] = "5      ";
board[5][8] = "6      ";
board[6][8] = "7      ";
board[7][8] = "8      ";
board[8][0] = "A      ";
board[8][1] = "B      ";
board[8][2] = "C      ";
board[8][3] = "D      ";
board[8][4] = "E      ";
board[8][5] = "F      ";
board[8][6] = "G      ";
board[8][7] = "H      ";

	for (int i = 0; i < board.length; i++) {
		for (int j = 0; j < board[i].length; j++) {
			if (j == 8) {System.out.print(board[i][j] + "");} else {
			System.out.print(board[i][j] + "|");}
		}
		System.out.println();
	}




		//  Select figure & position
	Scanner reader = new Scanner(System.in);
	System.out.println("");
	System.out.println("Select the movement of the figure ");
	String position1 = reader.next().toUpperCase();
	String position2 = reader.next().toUpperCase();
	// Validation
	if (position1.length() != 2 && position2.length() != 2) {
	    invalidInput();
	}
	// 'Coordinates' to steps
	int col1 = (int)position1.charAt(0);
	int row1 = (int)position1.charAt(1);
	int col2 = (int)position2.charAt(0);
	int row2 = (int)position2.charAt(1);
	// Validation with ASCII code A=65, H=72, '8'=56
	if (col1 < 65 || col1 >72 || col2 <65 || col2>72 || row1 >56 || row2>56) {
	    invalidInput();
	}



	figures(row1, col1, row2, col2, board);
    }

	static void invalidInput() {
	  System.out.println("Incorrect positions!! Please try again");
	    System.exit(0);
	}


	static void figures(int row1, int col1, int row2, int col2, String [][] board) {
	    
	    King newKing = new King();
	    System.out.println("For figure King   is " + newKing.step(row1, col1, row2, col2, board));
	    
	    Rook newRook = new Rook();
	    System.out.println("For figure Rook   is " + newRook.step(row1, col1, row2, col2));

	    Bishop newBishop = new Bishop();
	    System.out.println("For figure Bishop is " + newBishop.step(row1, col1, row2, col2));

	    Knight newKnight = new Knight();
	    System.out.println("For figure Knight is " + newKnight.step(row1, col1, row2, col2));

	    Pawn newPawn = new Pawn();
	    System.out.println("For figure Pawn   is " + newPawn.step(row1, col1, row2, col2));
    	

	}

}