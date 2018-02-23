package com.itc7;
import com.itc7.binarySearch.*;

public class Search {
    public static void main(String[] args) {
		Integer[] intArray = {23, 32, 31, 24, 17, 25, 1};
		Double[] doubleArray = {20.05, 20.1, 17.89, 3.3, 1.5};
		
	
		System.out.println("In array index of 23     :  " + BinarySaerch.binarySearch(intArray, 0, intArray.length-1, 24));
		System.out.println("In array index of 3.3    :  " + BinarySaerch.binarySearch(doubleArray, 0, doubleArray.length-1, 3.3));

    }    
}