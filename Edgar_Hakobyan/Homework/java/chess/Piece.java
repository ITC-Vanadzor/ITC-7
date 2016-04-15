package chess;

public interface Piece {
//	boolean location(Position start);
	String getColor();
    boolean step(Position start, Position finish,Board board);
}
