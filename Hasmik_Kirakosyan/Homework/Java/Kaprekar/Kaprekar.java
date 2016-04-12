import java.util.Scanner;
class Kaprekar {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Number tiv = new Number(n);
		String format = "%0"+tiv.count()+"d\n";
		System.out.format("Min number is  "+format, tiv.minNum());
		System.out.format("Max number is  " + tiv.maxNum());
		System.out.format("\n Result "+format, tiv.Diff());
	}
}
