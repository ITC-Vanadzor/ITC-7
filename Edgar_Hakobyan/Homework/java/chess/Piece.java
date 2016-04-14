package chess;

public interface Piece {
//	boolean location(Position start);
	String color = "white";
    boolean step(Position start, Position finish,Board board);
}
