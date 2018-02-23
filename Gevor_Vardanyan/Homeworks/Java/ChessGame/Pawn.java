public class Pawn implements Piece {
    public boolean step (int i1, int j1, int i2, int j2) {
	return (j1==j2 && (Math.abs(i1-i2)==1 || Math.abs(i1-i2)==2)); 
    }

}
