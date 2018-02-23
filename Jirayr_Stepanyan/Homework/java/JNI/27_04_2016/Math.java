public class Math
{
	static
	{
		 System.loadLibrary("Math");
	}
	public native static int factorial(int number);
	public native static int max(int[] array);
	public native static int min(int[] array);
	public native static int[] referanceSort(int[] array);
	public native static int[] sort(int[] array);
}