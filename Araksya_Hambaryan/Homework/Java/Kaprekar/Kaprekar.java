import java.util.Scanner;
class Kaprekar {
    public static void main(String [] args) {
	Scanner reader = new Scanner(System.in);
	System.out.print("Enter the number ");
	int n = reader.nextInt();
	Number tiv = new Number(n);
	System.out.println("Kaprekar number is ");
	tiv.Diff();
    }
}
