import java.util.Scanner;

class Kaprekar {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number: ");
        int number = in.nextInt();
        Number n = new Number(number);
        System.out.println("Max number: " + n.max());
        System.out.println("Min number: " + n.min());
        String format = n.form();
        System.out.format("Result " + format, n.diff());
    }
}
