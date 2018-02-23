public class MathTest {
    public static void main(String args[]){
	JNIMath mathObj = new JNIMath();
	System.out.println("Factorial --- " + mathObj.factorial(4));
	int[] array = {5, 6, 15, 1, 98, 3};
	System.out.println("Max Element --- " + mathObj.maxElement(array));
	System.out.println("Min Element --- " + mathObj.minElement(array));
	System.out.println("Assorted array --- " );
	int[] arrayTmp = mathObj.sortArray(array);
	printArray(array);
	System.out.println("Assorted array / void --- ");
	mathObj.sortArrayVoid(array);

    }

    public static void printArray(int[] array) {
	System.out.println(" Java Array before sorting  ---  ");
	for (int i=0; i < array.length; ++i) {
	    System.out.print(array[i] + "  ");    
	}	
	System.out.println();
    }
}
