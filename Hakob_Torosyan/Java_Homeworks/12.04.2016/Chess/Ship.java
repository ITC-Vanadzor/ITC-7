public class  Ship implements Piece {
	public boolean step(Point first, Point last) {
		return (first.getX() == last.getX() || first.getY() == last.getY());
	}
} 
