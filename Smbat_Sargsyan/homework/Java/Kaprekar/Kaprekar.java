import java.util.Scanner;
class Kaprekar {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Number tiv = new Number(n);
		System.out.println("Min number is  "+ tiv.minNum());
		System.out.println("Max number is  " + tiv.maxNum());
		System.out.print("Kaprekar number is  ");
		tiv.Diff();
	}
}
