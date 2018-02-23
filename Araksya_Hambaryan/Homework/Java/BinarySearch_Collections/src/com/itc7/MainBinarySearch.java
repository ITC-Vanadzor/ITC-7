package com.itc7;

import com.itc7.binarySearch.BinarySearch;
import com.itc7.data.DataUtils;
import java.util.ArrayList;

public class MainBinarySearch {
    public static void main(String[] args) {
	ArrayList <Integer> intList = new ArrayList <Integer>();
	DataUtils.fillIntegerData(intList);
	
	ArrayList <String> stringList = new ArrayList <String>();
	DataUtils.fillStringData(stringList);
	
	System.out.println("For element 20");
	System.out.println(BinarySearch.resultComparision(intList, 20));
	

	System.out.println("For element c3");
	System.out.println(BinarySearch.resultComparision(stringList, "c3"));
	
    }    
}
