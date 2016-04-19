package com.itc7.binaryGeneric;
public class BinarySearch
{
	public static <T extends Comparable> int binarySearch(T[] tArray, int first, int last, T element)
	{
		int index;
		if(last < first)
		{
			return -1;
		}
			int average = (last + first)/2;
			if(tArray[average].compareTo(element) == 0)
			{
				index = average;
			}
			else if(tArray[average].compareTo(element) > 0)
			{
				index = binarySearch(tArray, first, average - 1, element);
			}
			else
			{
				index = binarySearch(tArray, average + 1, last, element);	
			}
		
		return index;
	}
}
