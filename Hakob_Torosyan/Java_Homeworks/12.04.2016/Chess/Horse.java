public class Horse implements Piece {
        public boolean step(Point first, Point last) {
                return (Math.abs(first.getX() - last.getX()) == 1 && Math.abs(first.getY() - last.getY()) == 2) ||
			(Math.abs(first.getX() - last.getX()) == 2 && Math.abs(first.getY() - last.getY()) == 1);
        }
}

