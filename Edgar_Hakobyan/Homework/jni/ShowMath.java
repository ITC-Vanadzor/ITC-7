public class  ShowMath {
    public static void main(String[] args) {
        MyMath math = new MyMath();
        int[] arr = new int[]{1,4,2};
        System.out.println(math.factorial(4));
        System.out.println(math.getMax(arr));
        System.out.println(math.getMin(arr));
        System.out.println(math.sortArrToMax(arr));
        System.out.println(math.sortArrToMin(arr));
    }
}
