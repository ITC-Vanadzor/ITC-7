public class ShowMath
{
	public static void main(String[] args)
	{
		Math math = new Math();
		int size = 5;
		int[] arr = new int[size];
		math.getFactorial(3);
		math.getMax(arr,size);
		math.getMin(arr,size);
		math.sortArrToMax(arr,size);
		math.sortArrToMin(arr,size);
	}
}

