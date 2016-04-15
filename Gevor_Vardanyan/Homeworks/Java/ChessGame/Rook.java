public class Rook implements Piece {
    public boolean step (int i1, int j1, int i2, int j2) {
	return (i1==i2 || j1==j2); 
    }

}
