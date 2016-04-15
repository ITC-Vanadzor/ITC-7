import java.util.Vector;
import java.lang.Math;
import java.util.Scanner;
// Please keep the coding style mentioned during the lesson
class kaprekar 
{
    // The rules of the incapsulation are not kept
    public static int min = 0;
    public static int max = 0;
    public static void main(String[] args) 
    {
		Scanner cin = new Scanner(System.in);           
		int number = cin.nextInt();
		Vector<Integer> vector = new Vector<Integer>();
		while(number > 0)
		{
		       vector.add(number % 10);
		       number /= 10;
		}
		Number n = new Number();
		n.max_min(vector);
		int result = max - min;
		n.validation(vector, result);
    }
}
