public class Math
{
	static {
		System.loadLibrary("Math");
	}
	public native long getFactorial(int num);
	public native int getMax(int[] arr, int size);
        public native int getMin(int[] arr, int size);
	public native int[] sortArrToMax(int[] arr, int size);
	public native void sortArrToMin(int[] arr, int size);
}
