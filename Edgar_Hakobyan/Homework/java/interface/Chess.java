public class Chess {
	public static void main(String[] args) {
		Rook r = new Rook();
		r.step(0,1,3,1);
		Soldier s = new Soldier();
		s.step(6,6,6,4);
		Elephant e = new Elephant();
		e.step(5,3,7,7);
	}
}
