public class ShowResults {
    public static void main(String[] args) {
        MathJNI m = new MathJNI();
        System.out.println("factorial is : " +m.factorial(5));

        int []array = {6, 777, -6};
        System.out.println("minimum number is : "+m.min(array));
        System.out.println("maximum number is : "+m.max(array));
    }
}
