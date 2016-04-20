package com.itc7;
import com.itc7.binaryGeneric.*;

public class Main
{
	public static void main(String[] args)
	{
		Integer[] intArray = {1,5,8,9,17,36};
		String[] strArray = {"aaadffg","bgfrt","fffghy","hhhjkl", "mmmhng", "opfnfnf"};
		System.out.println(BinarySearch.binarySearch(intArray,0,intArray.length,17));
		System.out.println(BinarySearch.binarySearch(strArray,0,strArray.length,"fffghy"));
	}
}
