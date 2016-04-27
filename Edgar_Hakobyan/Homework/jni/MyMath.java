public class MyMath {
    static {
        System.loadLibrary("MyMath");
    }

    public native int factorial(int num);
    public native int getMax(int[] arr);
    public native int getMin(int[] arr);
    public native int[] sortArrToMax(int[] arr);
    public native int[] sortArrToMin(int[] arr);
}
