package com.itc7;

import com.itc7.binarySearch.*;

public class Main
{
	public static void main(String[] args)
	{
		Integer [] str = {1, 15, 9, 13, 5};
		BinarySearch search = new BinarySearch();
		StandartBinarySearch standartSearch = new StandartBinarySearch();
		standartSearch.sort(str);
		int binarySearchIndex = search.binarySearch(str, 0, str.length, 13);
		int standartBinarySearchIndex = standartSearch.binarySearch(str, 60);
		if(binarySearchIndex == standartBinarySearchIndex)
		{
			System.out.println("indexes are equals");
		}
		else
		{
			System.out.println("indexes are NOT equals");
		}
	}
}