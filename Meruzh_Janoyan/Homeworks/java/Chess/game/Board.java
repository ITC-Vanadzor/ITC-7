package game;

public final class Board{
	private static Piece[][] matrix=new Piece[8][8];
	
	public static boolean set(Position position,Piece piece){
		if(isEmpty(position)){
			int i=position.getColumn()-'a';
			int j=position.getRow()-1;

			//remove old position
			unSet(piece.getPosition());

			//adding to board
			matrix[i][j]=piece;
			piece.setPosition(position);

			return true;
		}
		return false;
	}
	public static boolean unSet(Position position){
		if(!position.isNull() && !isEmpty(position)){
			int i=position.getColumn()-'a';
			int j=position.getRow()-1;
			matrix[i][j]=null;
			return true;
		}
		return false;
	}

	public static boolean isEmpty(Position position){
		if(!position.isNull()){
		int i=position.getColumn()-'a';
		int j=position.getRow()-1;
		return matrix[i][j]==null;
		}
		return true;
	}
	public static boolean getColour(Position position){
		if(!isEmpty(position)){
			int i=position.getColumn()-'a';
			int j=position.getRow()-1;
			return matrix[i][j].getColour();
		}
		return false;
	}
	public static boolean isClean(Position from, Position to){
		int fromR=from.getRow();
		int fromC=from.getColumn()-'a';
		int toR=to.getRow();
		int toC=to.getColumn()-'a';
		int delta=Math.abs(fromR-toR)-Math.abs(fromC-toC);

		if(fromR==toR){
			for(int i=fromC+1;i<toC;++i){
				if(matrix[i][fromR]!=null) return false;
			}
			return true;
		}
		else if(fromC==toC){
			for(int i=fromR+1;i<toR;++i){
				if(matrix[fromC][i]!=null) return false;
			}
			return true;

		}
		else if(delta==0){
			//TO DO
		}
		return false;

	}

}