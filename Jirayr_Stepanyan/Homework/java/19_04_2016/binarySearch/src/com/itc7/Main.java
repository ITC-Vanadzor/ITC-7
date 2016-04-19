package com.itc7;
import com.itc7.binaryGeneric.*;

public class Main
{
	public static void main(String[] args)
	{
		BinarySearch search = new BinarySearch(5);
		String[] str = {"fcjh","hduyg","aaaaa","frgvr", "frfgrg", "fgvtbtb"};
		System.out.println(search.binarySearch(str, 0, 5, "frgvr"));
	}
}
