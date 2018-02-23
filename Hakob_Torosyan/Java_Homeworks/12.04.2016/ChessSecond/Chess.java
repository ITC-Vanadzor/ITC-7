import java.util.*;
public class Chess {
	public static void main(String args[]) {
		Piece[][] board = new Piece[8][8];
		Point position1 = new Point(2,3);
		Point position2 = new Point(1,5);

		Figure figure1 = new Figure("white", position1, "ship");
		board[1][2] = figure1;
		Point point1 = new Point(4,6);
		System.out.println("For this figure we will have: " + board[1][2].step(point1));

		Figure figure2 = new Figure("black", position2, "horse");
		board[0][4] = figure2;
		Point point2 = new Point(2,3);
		System.out.println("For this figure we will have: " + board[0][4].step(point2));
		
	}	
}
