public class MathJNI {

	static {
        	System.loadLibrary("MathJNI");
   	}       
	public native int factorial(int number);
	public native int min(int[] array);
	public native int max(int[] array);
	public native int[] sortIncrease(int[] array); // returns new array
	public native void  sortDecrease(int[] array);  // changes original array
}
