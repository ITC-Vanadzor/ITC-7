package com.itc7;
import com.itc7.binarySearch.*;

public class Search {
    public static void main(String[] args) {
		Integer[] intArray = {23, 32, 31, 24, 17, 25, 1};
		Double[] doubleArray = {20.067, 17.89, 3.3, 1.5, 1962};
		String[] stringArray = {"AA23", "DY62", "ED59", "GV93"};
	
		System.out.println("In array index of 23     :  " + BinarySaerch.binarySearch(intArray, 0, intArray.length, 23));
		System.out.println("In array index of 20.067 :  " + BinarySaerch.binarySearch(doubleArray, 0, doubleArray.length, 20.067));
		System.out.println("In array index of DY62   :  " + BinarySaerch.binarySearch(stringArray, 0, stringArray.length, "DY62"));

    }    
}