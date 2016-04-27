public class MathJNI {

	static {
        	System.loadLibrary("MathJNI");
   	}       
	public native int factorial(int number);
	public native int min(int[] array);
	public native int max(int[] array);
	public native void sortIncrease(int[] array); 
	public native int[] sortDecrease(int[] array); 
}
