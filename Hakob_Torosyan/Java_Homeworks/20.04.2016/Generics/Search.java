import src.com.itc7.BinarySearch;

public class Search {
	public static void main(String args[])
	{
		String[] stringArray = {"Hmbo","Babken","Ha","che","as","b","i"};
		Integer[] intArray = {1,45,62,12,3,7,55};
		Double[] doubleArray = {3.4,2.3,1.1,2.8,3.7};

		System.out.println("intArray " + BinarySearch.binarySearch(intArray, 0, intArray.length, 62));
                System.out.println( "doubleArray " + BinarySearch.binarySearch(doubleArray, 0, doubleArray.length, 1.1));
		System.out.println( "stringArray " + BinarySearch.binarySearch(stringArray, 0, stringArray.length, "a"));
	} 
}
