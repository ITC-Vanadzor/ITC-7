public class Chess {
	public static void main(String args[]) {
		Point first = new Point(1,4);
		Point last = new Point(2,2);
		Ship ship = new Ship();
		Horse horse = new Horse();
		System.out.println("For ship is: " + ship.step(first,last));
		System.out.println("For horse is: " + horse.step(first,last));
	}
}
