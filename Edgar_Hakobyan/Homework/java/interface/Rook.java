public class Rook implements Piece {
		public void step(int x1,int y1,int x2,int y2) {
				if( x1 == x2 || y1 == y2) {
						System.out.println("ok");
				} else {
						System.out.println("no");
				}
		}
}
