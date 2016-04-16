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
	  ChessBoard.printBoard();
	 

	  Knights knights1= new Knights("black",1,4);
	  ChessBoard.setFigure("black",1,4);
	  ChessBoard.printBoard();
	  System.out.println("Knights steps "+knights1.Step(knights1.getPosition(),end)); 	
	  ChessBoard.printBoard();

	  Bishop bishop1=new Bishop("white",2,0);
	  ChessBoard.setFigure("white", 2,0); 
	  ChessBoard.printBoard();	
	  System.out.println("Bishop steps "+ bishop1.Step(bishop1.getPosition(),end)); 
	  ChessBoard.printBoard();

	  Queen queen1=new Queen("black",4,4);
      	  ChessBoard.setFigure("black", 4,4); 	
	  ChessBoard.printBoard();	
	  System.out.println("Queen steps "+ queen1.Step(queen1.getPosition(),end));   	
	  ChessBoard.printBoard();
	  
	  Pawns pawn1=new Pawns("white", 1,1);
	  ChessBoard.setFigure("white", 1,1); 
	  ChessBoard.printBoard();
	  System.out.println("Pawn  steps "+ pawn1.Step(pawn1.getPosition(),end)); 	
	  ChessBoard.printBoard();

	  King  king=new King("black", 3,2);
	  ChessBoard.setFigure("black", 3,2); 
	  ChessBoard.printBoard();
	  System.out.println("King  steps "+ king.Step(king.getPosition(),end)); 	
	  ChessBoard.printBoard();


	  ChessBoard.printBoard();	
	}
}

/*	static private int row;
	static private int column;
	static private String figureName;
	static private String figureColor;

	public static void main(String [] args)
	{
	  
	  Position end=new Position(2,2);
	  Scanner reader = new Scanner(System.in);
	  Rook myFigure=enterFigure();
	  System.out.println(" steps "+ myFigure.Step(myFigure.getPosition(),end)); 	
	  ChessBoard.printBoard();	
	}
	public static Figure  enterFigure()
	{
			
		System.out.print("Enter figure name: ");
	        figureName = reader.next();
		System.out.print("Enter color of figure: ");
	        figureColor=reader.next();
		do{
			System.out.print("Enter row between[0,7]: ");
			row=reader.nextInt();
			System.out.print("Enter column between[0,7]: ");
		        column=reader.nextInt();
	       	  }while(row<0 || row>7 || column>7 || column<0);

		switch(figureName){

		case "Rook": Rook rook=new Rook(figureColor, row,column);  
		             ChessBoard.setFigure(figureColor, row, column); 
			     return rook;
				
		case "Pawns": Pawns pawn=new Pawns(figureColor, row,column);  
             		      ChessBoard.setFigure(figureColor, row, column); 
		     	      return pawn;
		case "King": King king=new King(figureColor, row,column);  
		             ChessBoard.setFigure(figureColor, row, column); 
			     return king;
		case "Queen": Queen  queen=new Queen(figureColor, row,column);  
	            	      ChessBoard.setFigure(figureColor, row, column);
		     	      return queen;
		case "Bishop": Bishop bishop=new Bishop(figureColor, row,column);  
	             	      ChessBoard.setFigure(figureColor, row, column); 
		     	      return bishop;
		case "Knights": Knights knigths=new Knights(figureColor, row,column); 
		              ChessBoard.setFigure(figureColor, row, column); 
		     	      return knights;
		default: System.out.println("Incorrect  name of figure ");
			  System.exit(0);
	}*/


