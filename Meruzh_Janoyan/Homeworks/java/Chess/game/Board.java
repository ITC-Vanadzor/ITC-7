package game;

public final class Board{
	private static Piece[][] matrix=new Piece[8][8];
	
	public static boolean set(Position position,Piece piece){
		if(isEmpty(position)){
			int i=position.getColumn()-'a';
			int j=position.getRow()-1;

			//adding to board
			matrix[i][j]=piece;
			piece.setPosition(position);

			//remove old position
			i=piece.getColumn()-'a';
			j=piece.getRow()-1;
			matrix[i][j]=null;

			return true;
		}
		return false;
	}
	public static boolean unSet(Position position,Piece piece){
		if(!isEmpty(position)){
			int i=position.getColumn()-'a';
			int j=position.getRow()-1;
			matrix[i][j]=null;
			return true;
		}
		return false;
	}

	public static boolean isEmpty(Position position){
		int i=position.getColumn()-'a';
		int j=position.getRow()-1;
		return matrix[i][j]==null;
	}


}