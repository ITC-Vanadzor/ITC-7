class ChessGame {
	public static void main(String [] args) {
		int i = 2; int j = 3;
		int n = 4; int k = 2;
		Position start = new Position(i,j);
		Position finish  = new Position(n,k);
		Ship ship = new Ship(start,finish);
		Horse horse = new Horse(start,finish);
		System.out.println(ship.step(start,finish));
		System.out.println(horse.step(start,finish));
	}
}
