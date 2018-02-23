public class  MyFunctions{
	static{
		System.load("/home/jan/Desktop/J/MyFunctions.so");
	}

	public native int factorial(int n);
	public native int min(int[] arr);
	public native int max(int[] arr);
	public native int[] sort(int[] arr);
	public native void sortReferance(int[] arr);

}