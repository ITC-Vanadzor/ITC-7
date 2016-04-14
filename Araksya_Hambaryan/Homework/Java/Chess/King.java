public class King extends Figure implements Piece {
    public King (Cell position, char color) {
        this.position = position;
        this.color = color;
        if (color == 'W') {
            shorthand = 'K';
        } else {
            shorthand = 'k';
        }
    }
    public boolean step (int i2, int j2) {
        int i1 = position.col;
        int j1 = position.row;
	    return ((Math.abs(i1-i2)==1 && j2==j1) || (Math.abs(j1-j2)==1 && i2==i1) || (Math.abs(i1-i2)==1 && Math.abs(i1-i2)==1) ); 
    }

}
