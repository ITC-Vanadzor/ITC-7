public class Elephant implements Piece {
		public void step(int x1,int y1,int x2,int y2) {
				if( Math.abs(x1-x2) == Math.abs(y1-y2) ) {
						System.out.println("ok");
				} else if ( (x1+y2) == (x2+y1) ) {
						System.out.println("ok");
				} else {
						System.out.println("no");
				}
		}
}
