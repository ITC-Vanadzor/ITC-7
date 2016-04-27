public class ShowResults {
    private static void print(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]+" ");
        }
    }
    public static void main(String[] args) {
        MathJNI m = new MathJNI();
        System.out.println("\nFactorial of number 5 is : " +m.factorial(5));

        int []array = {6, 777, -6};
        
        //============= Ascending array / returns new sorted array =========================
        System.out.println("\n ******Unsorted array *******");
        print(array);

        System.out.println("\n\nMinimum number is : "+m.min(array));
        System.out.println("\nMaximum number is : "+m.max(array));

        //============= Ascending array / returns new sorted array =========================
        int []sortedArr; // new sorted array
        sortedArr = m.sortIncrease(array);

        System.out.println("\n*********Sorted array in ascending order / Method returns the new sorted array *******");           print(sortedArr);
        
        //============= Descending array / returns the original array =========================
        array = m.sortDecrease(array);

        System.out.println("\n********* Sorted array in descending order / Method returns the original array *******");
        print(array);
    }
}
