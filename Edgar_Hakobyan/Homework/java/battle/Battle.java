import java.util.Scanner;

class Battle {
	public static void main(String[] args) {
		int n;
		Scanner in = new Scanner(System.in);
		System.out.println("enter size of field");
		n = in.nextInt();
		Field field = new Field(n);
		Ships ships = new Ships(field);
		System.out.println(ships.countShips());
	}
}
