public class Knight extends Figure implements Piece {
    public Knight (Cell position, char color) {
        this.position = position;
        this.color = color;
        if (color == 'W') {
            shorthand = 'R';
        } else {
            shorthand = 'r';
        }
    }
    public boolean step (int i2, int j2) {
        int i1 = position.col;
        int j1 = position.row;
	    return ((Math.abs(i1-i2)==2 && Math.abs(j2-j1)==1) || (Math.abs(i1-i2)==1 && Math.abs(j2-j1)==2)); 
    }

}
