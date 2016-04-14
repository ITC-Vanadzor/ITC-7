package chess;

public class Board {
	public Piece[][] board = new Piece[8][8];
	
	public void setFigure(Piece figure, Position start) {
		if (board[start.x][start.y] == null) {
			board[start.x][start.y] = figure;
		} else {
			System.out.println("field already busy");
		}
	}	
/*	public boolean getFigure(Position figure) {
		return (board[figure.x][figure.y] != null);
	}*/
}
