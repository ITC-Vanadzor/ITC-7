package com.itc7.binarySearch;

public class BinarySaerch {
    public static <T extends Comparable> int binarySearch (T[] array, int first, int last, T K) {
	
		if (last < first) {
	    	return -1;
		}
	
		int index;
		int middle = (first + last) / 2;
	
		if (array[middle].compareTo(K) == 0) {
	    	index = middle;
		} else if (array[middle].compareTo(K) > 0) {
	    	index = binarySearch(array, first, middle-1, K);
		} else {
	    	index = binarySearch(array, middle+1, last, K);
		}
	return index;
    }    
}