package com.itc7;
import com.itc7.binarySearch.BinarySearch;
import com.itc7.data.Utils;
import java.util.ArrayList;

public class TestBinarySearch {
    public static void main(String[] args) {
		ArrayList <Integer> intList = new ArrayList <Integer>();
		Utils.forInteger(intList);
	
		ArrayList <String> stringList = new ArrayList <String>();
		Utils.forString(stringList);
	
		System.out.println("Index for 23 is   : ");
		System.out.println(BinarySearch.resultComparision(intList, 23));
	
		System.out.println("Index for AA25 is : ");
		System.out.println(BinarySearch.resultComparision(stringList, "AA25"));
	}    
}