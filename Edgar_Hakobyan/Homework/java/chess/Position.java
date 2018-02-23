package chess;

public class Position {
    private char x;
    private int y;
    
    public Position(char x1, int y1) {
        x = x1;
        y = y1;
    }
    
    public char posX() {
        return x;
    }

    public int posY() {
        return y;
    }
}
