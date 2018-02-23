package com.itc7;

import com.itc7.binarySearch.*;

public class Search {
    public static void main(String[] args) {
	Integer[] intArray = {1, 5, 8, 9, 11, 15};
	Double[] doubleArray = {1.1, 1.5, 2.0, 2.6, 2.8};
	String[] stringArray = {"a1", "a3", "b1", "c5"};
	
	System.out.println("intArray -- " + BinarySaerch.binarySearch(intArray, 0, intArray.length, 1));
	System.out.println("doubleArray -- " + BinarySaerch.binarySearch(doubleArray, 0, doubleArray.length, 2.8));
	System.out.println("stringArray -- " + BinarySaerch.binarySearch(stringArray, 0, stringArray.length, "c5"));

    }    
}
