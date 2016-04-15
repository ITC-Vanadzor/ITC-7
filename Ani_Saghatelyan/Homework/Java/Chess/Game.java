package Chess;
import figure.*;
public class Game
{
	public static void main(String [] args)
	{
	  
	 // ChessBoard.setFigure("white", 1,6); 
	//  ChessBoard.setFigure("white", 4,2); 
	 // ChessBoard.setFigure("black", 3,7); 
	  Position end=new Position(2,2);

	  Rook rook1=new Rook("white", 4,6);
	  ChessBoard.setFigure("white", 4,6); 
	  ChessBoard.printBoard();
	  System.out.println("Rook steps "+ rook1.Step(rook1.getPosition(),end)); 	
	 

	  Knights knights1= new Knights("black",1,4);
	  ChessBoard.setFigure("black",1,4);
	  ChessBoard.printBoard();
	  System.out.println("Knights steps "+knights1.Step(knights1.getPosition(),end)); 	

	  Bishop bishop1=new Bishop("white",2,0);
	  ChessBoard.setFigure("white", 2,0); 
	  ChessBoard.printBoard();	
	  System.out.println("Bishop steps "+ bishop1.Step(bishop1.getPosition(),end)); 

	  Queen queen1=new Queen("black",4,4);
      	  ChessBoard.setFigure("black", 4,4); 	
	  ChessBoard.printBoard();	
	  System.out.println("Queen steps "+ queen1.Step(queen1.getPosition(),end));   	
	  
	  Pawns pawn1=new Pawns("white", 1,1);
	  ChessBoard.setFigure("white", 1,1); 
	  ChessBoard.printBoard();
	  System.out.println("Pawn  steps "+ pawn1.Step(pawn1.getPosition(),end)); 	

	  King  king=new King("black", 3,2);
	  ChessBoard.setFigure("black", 3,2); 
	  ChessBoard.printBoard();
	  System.out.println("King  steps "+ king.Step(king.getPosition(),end)); 	


	  ChessBoard.printBoard();	
	}
}
