import java.util.*;

class Kaprekar {
		public static void main(String[] args) {
				Scanner in = new Scanner(System.in);
				int number = in.nextInt();
				Number n = new Number();
				Vector<Integer> parseNumber = n.parse(number);
				int size = parseNumber.size();
				int diff = n.max_min(parseNumber);
				n.validation(parseNumber, size, diff);

		}
}
