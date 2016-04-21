package com.itc7.binarySearch;

public class BinarySaerch {
    public static <T extends Number & Comparable<T>> int binarySearch (T[] array, int first, int last, T k) {
	
		if (last < first) {
	    	return -1;
		}
	
		int index;
		int middle = (first + last) / 2;
	
		if (array[middle].compareTo(k) == 0) {
	    	index = middle;
		} else if (array[middle].compareTo(k) > 0) {
	    	index = binarySearch(array, first, middle-1, k);
		} else {
	    	index = binarySearch(array, middle+1, last, k);
		}
	return index;
    }    
}