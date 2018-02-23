import binarysearch.BinarySearch;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class GenericTest{
	public static void main(String[] args){
		
		List<Integer> intArrList=Arrays.asList(25,31,24,88,75,74,92,32,14);	

		Collections.sort(intArrList);
		
		int myClassResult= BinarySearch.searchElement(intArrList,92);
		int collectionResult=Collections.binarySearch(intArrList, 92);	
		  
		System.out.println("Collection lib result is: "+collectionResult);
		System.out.println("My Class  result is: "+myClassResult);
		
		System.out.println("It's OK? "+BinarySearch.superCompare(collectionResult,myClassResult));

		}
}
