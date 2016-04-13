import java.util.Scanner;

class Battles {
		  public static void main (String[] args) {
					 Scanner in= new Scanner(System.in);
					 Board board = new Board(5);
					 board.inputBoardUnits(5);
					 board.checkUnits();
					 System.out.println("Number of ships is "+board.getResult());
		  } 

}
