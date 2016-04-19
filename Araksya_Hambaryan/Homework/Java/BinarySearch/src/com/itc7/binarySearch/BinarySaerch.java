package com.itc7.binarySearch;

public class BinarySaerch {
    public static <T extends Comparable> int binarySearch (T[] array, int first, int last, T K) {
	if (last < first) {
	    return -1;
	}
	int index;
	int mid = (first + last) / 2;
	
	if (array[mid].compareTo(K) == 0) {
	    index = mid;
	} else if (array[mid].compareTo(K) > 0) {
	    index = binarySearch(array, first, mid-1, K);
	} else {
	    index = binarySearch(array, mid+1, last, K);
	}
	return index;
    }    
}
