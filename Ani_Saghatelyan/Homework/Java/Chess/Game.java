package Chess;
import figure.*;
public class Game
{
	public static void main(String [] args)
	{
	  Position end=new Position(8,6);
	  ChessBoard.printBoard();	
	  Rook rook1=new Rook("white", 2,6);
	  ChessBoard.printBoard();	
	  System.out.println("Rook steps "+ rook1.Step(rook1.getPosition(),end)); 	
	  ChessBoard.printBoard();	
	  Knights knights1= new Knights("black",2,3);
	  System.out.println("Knights steps "+knights1.Step(knights1.getPosition(),end)); 	
/*	  Bishop bishop1=new Bishop("white",1,8);
	  ChessBoard.printBoard();	
	  System.out.println("Bishop steps "+ bishop1.Step(bishop1.getPosition(),end)); 
	  Queen queen1=new Queen("black",1,6);
	  ChessBoard.printBoard();	
	  System.out.println("Queen steps "+ queen1.Step(queen1.getPosition(),end));   	
	  ChessBoard.printBoard();	*/
	}
}
