public class MathTest {
    public static void main(String args[]){
		
		MathFunc mathObj = new MathFunc();
		System.out.println("Factorial --- " + mathObj.factorial(4));
		int[] array = {5, 6, 15, 1, 98, 3};
		System.out.println("Max Element is :   " + mathObj.maxElement(array));
		System.out.println("Min Element is :   " + mathObj.minElement(array));
		System.out.println("Sorted array is    :  " );
		int[] arrayTmp = mathObj.sortArray(array);
		System.out.println("Sorted array (ref) :  ");
		 mathObj.sortArrayVoid(array);
   
    }    
}
