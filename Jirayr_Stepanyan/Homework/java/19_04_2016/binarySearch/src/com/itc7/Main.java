package com.itc7;
import com.itc7.binaryGeneric.*;

public class Main
{
	public static void main(String[] args)
	{
		BinarySearch search = new BinarySearch();
		Integer [] str = {1, 3, 5, 6, 8};
		System.out.println(BinarySearch.binarySearch(str, 0, str.length, 6));
	}
}
