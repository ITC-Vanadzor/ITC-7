public class MathFunc {
    static {
		System.loadLibrary("MathFunc");
    }

    public native int factorial(int number);
    public native int maxElement(int[] array);
    public native int minElement(int[] array);
    public native int[] sortArray(int[] array);
    public native void sortArrayVoid(int[] array);
}