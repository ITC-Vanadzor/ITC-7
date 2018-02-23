import java.util.Scanner;

class Kaprekar {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number: ");
        int number = in.nextInt();
        Number n = new Number(number);
        String format = "%0" + n.sizeNumber() + "d\n";
        System.out.format("Result " + format, n.diff());
    }
}
