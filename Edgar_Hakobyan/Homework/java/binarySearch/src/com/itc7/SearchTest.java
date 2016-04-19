package com.itc7;

import com.itc7.binarySearch.BinarySearch;

public class SearchTest {

	public static void main(String[] args) {
		BinarySearch obj = new BinarySearch();
		Integer[] arr = {5,7,12,16,24,31};
		System.out.println("index of value: " + obj.binarySearch(arr, 0, arr.length-1, 24));
		
		String[] str = {"aab", "dcg", "det", "dsd"};
		System.out.println("index of value: " + obj.binarySearch(str, 0, str.length-1, "det"));
	}
}
