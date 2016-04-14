public class Pawn extends Figure implements Piece {
    public Pawn (Cell position, char color) {
        this.position = position;
        this.color = color;
        if (color == 'W') {
            shorthand = 'P';
        } else {
            shorthand = 'p';
        }
    }
    public boolean step (int i2, int j2) {
        int i1 = position.col;
        int j1 = position.row;
	    return (j1==j2 && (Math.abs(i1-i2)==1 || Math.abs(i1-i2)==2)); 
    }

}
