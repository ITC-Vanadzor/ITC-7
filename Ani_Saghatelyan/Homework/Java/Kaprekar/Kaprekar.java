import java.util.Scanner;
class Kaprekar {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Number tiv = new Number(n);
		String format = "%0"+tiv.size()+"d\n";
		System.out.printf(format,  tiv.Diff());
	}
}
