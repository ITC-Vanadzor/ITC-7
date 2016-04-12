public class Soldier implements Piece {
	public void step(int x1,int y1,int x2,int y2) {
		if( x1 == x2 && y1 != 0 && y1 != 7 ) {
			switch (Math.abs(y2-y1)) {
				case 1: 
					System.out.println("ok");
					break;
				case 2:
					if( y1 == 1 || y1 == 6) {
						System.out.println("ok");
					} else {
						System.out.println("no");
					}
					break;
				default:
					System.out.println("no");
			}
		} else {
			System.out.println("no");
		}
	}
}
