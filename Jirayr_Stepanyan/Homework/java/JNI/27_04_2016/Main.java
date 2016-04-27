public class Main
{
	public static void main(String[] args)
	{
		Math math = new Math();
		System.out.println("factorial 3 = " + math.factorial(3));
		int[] array= {5, 6, 9, 1, 45, 20};
		System.out.println("max number in array = " + math.max(array));
		System.out.println("min number in array = " + math.min(array));
		System.out.println("sorted original array = " + math.referanceSort(array));
		System.out.println("sorted array = " + math.sort(array));
	}
}