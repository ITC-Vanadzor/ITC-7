import binarysearch.*;

public class GenericTest{
	public static void main(String[] args){
		Integer[] intArr={9,25,26,32,44,45,46};
		Double[] dblArr={9.01,25.02,260.0,32.65,44.9,45.12,46.3};
		
		System.out.println("Index of 44 is: "+BinarySearch.searchElement(intArr,44));
		System.out.println("Index of 46.3 is: "+BinarySearch.searchElement(dblArr,46.3));

	}
}