package com.itc7;
import com.itc7.binaryGeneric.*;
import java.util.ArrayList;
import java.util.Collections;

public class Main
{
	public static void main(String[] args)
	{
		ArrayList<Integer> list = new ArrayList<Integer>(); 
		Integer[] intArray = {1,5,89,9,36,17};
		for(Integer i: intArray) {
			list.add(i);
		}
		Collections.sort(list);
		System.out.println(BinarySearch.binarySearch(list,0,list.size(),17));
	}
}
