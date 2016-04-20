package com.itc7.binarySearch;

public class BinarySearch
{
	public <T extends Number & Comparable<T>> int binarySearch(T[] t, int first, int last, T number)
	{
		int index = 0;
		if(last < first)
		{
			index = -1;
		}
		else
		{
			int avarage = (last + first)/2;
			if(number == t[avarage])
			{
				index = avarage;
			}
			else if(t[avarage].compareTo(number) > 0)
			{
				index = binarySearch(t, first, avarage - 1, number);
			}
			else
			{
				index = binarySearch(t, avarage + 1, last, number);	
			}
		}
		return index;
	}
}
