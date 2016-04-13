package game;

public interface Piece{
	boolean setPosition(Position pos);
	boolean step(Position to);
	int getRow();
	char getColumn();
}