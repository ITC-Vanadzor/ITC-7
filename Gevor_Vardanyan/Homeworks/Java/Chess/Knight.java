public class Knight implements Piece {
    public boolean step (int i1, int j1, int i2, int j2) {
	return ((Math.abs(i1-i2)==2 && Math.abs(j2-j1)==1) || (Math.abs(i1-i2)==1 && Math.abs(j2-j1)==2)); 
    }

}
