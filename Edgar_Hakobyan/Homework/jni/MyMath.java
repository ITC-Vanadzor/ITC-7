public class MyMath {
    static {
        System.loadLibrary("MyMath");
    }

    public native int factorial(int num);
    public native int getMax(int[] arr);
    public native int getMin(int[] arr);

}
