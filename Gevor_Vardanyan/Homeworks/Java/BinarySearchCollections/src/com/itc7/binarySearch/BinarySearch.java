package com.itc7.binarySearch;
import java.util.Collections;
import java.util.ArrayList;
import com.itc7.TestBinarySearch;

public class BinarySearch {
    
    public static <T extends Comparable<? super T>> boolean resultComparision(ArrayList <T> list, T element) {
		int testResult = testBinarySearch(list, 0, list.size(), element);
		int collectionResult = collectionBinarySearch(list, element);
		System.out.println("index 					: " + testResult);
		System.out.println("index from Collections  : " + collectionResult);
		return testResult==collectionResult;
    }

    private static <T extends Comparable<? super T>> int collectionBinarySearch (ArrayList <T> list, T element) {
		Collections.sort(list);
		return Collections.binarySearch(list, element);	
    } 

    private static <T extends Comparable<?super T>> int testBinarySearch (ArrayList <T> list, int first, int last, T K) {
		if (last < first) {
	    	return -1;
		}
		int index;
		int middle = (first + last) / 2;
	
		if (list.get(middle).compareTo(K) == 0) {
	    	index = middle;
		} else if (list.get(middle).compareTo(K) > 0) {
	    	index = testBinarySearch(list, first, middle-1, K);
		} else {
	    	index = testBinarySearch(list, middle+1, last, K);
		}
		return index;
    }

}
