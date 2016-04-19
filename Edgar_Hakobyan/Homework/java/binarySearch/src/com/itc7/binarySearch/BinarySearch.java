package com.itc7.binarySearch;

public class BinarySearch {
	public static <T extends Comparable<T>> int binarySearch(T[] array, int first, int last, T value){
		if (first < last) {
			int mid = (first + last) / 2;
			int cmp = array[mid].compareTo(value);
			if(array[mid] == value) {
				return mid;
			}
			if(cmp < 0) {
				return binarySearch(array, mid + 1, last, value);
			}
			if(cmp > 0) {
				return binarySearch(array, first, mid - 1, value);
			}
		}
		return -1;
	}
}
