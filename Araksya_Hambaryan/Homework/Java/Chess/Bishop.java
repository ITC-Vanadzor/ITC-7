public class Bishop implements Piece {
    public boolean step (int i1, int j1, int i2, int j2) {
	return (Math.abs(i1-i2) == Math.abs(j1-j2)); 
    }

}
