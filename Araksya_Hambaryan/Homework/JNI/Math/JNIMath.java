public class JNIMath {
    static {
	System.loadLibrary("JNIMath");
    }
    public native int factorial(int number);
    public native int maxElement(int[] array);
    public native int minElement(int[] array);
    public native int[] sortArray(int[] array);
    public native void sortArrayVoid(int[] array);
}

