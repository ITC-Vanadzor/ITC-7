public class King implements Piece {
    public boolean step (int i1, int j1, int i2, int j2) {
	return ((Math.abs(i1-i2)==1 && j2==j1) || (Math.abs(j1-j2)==1 && i2==i1) || (Math.abs(i1-i2)==1 && Math.abs(i1-i2)==1)); 
    }

}
