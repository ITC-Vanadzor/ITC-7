public class Bishop extends Figure implements Piece {
    public Bishop (Cell position, char color) {
        this.position = position;
        this.color = color;
        if (color == 'W') {
            shorthand = 'L';
        } else {
            shorthand = 'l';
        }
    }
    public boolean step (int i2, int j2) {
        int i1 = position.col;
        int j1 = position.row;
	    return (Math.abs(i1-i2) == Math.abs(j1-j2)); 
    }

}
