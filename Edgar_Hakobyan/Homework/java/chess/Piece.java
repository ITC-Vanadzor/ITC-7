package chess;

public interface Piece {
    String getColor();
    boolean step(Position start, Position finish,Board board);
}
