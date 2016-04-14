public class Rook extends Figure implements Piece {
    public Rook (Cell position, char color) {
        this.position = position;
        this.color = color;
        if (color == 'W') {
            shorthand = 'T';
        } else {
            shorthand = 't';
        }
    }
    public boolean step (int i2, int j2) {
        int i1 = position.col;
        int j1 = position.row;
	    return (i1==i2 || j1==j2); 
    }

}
