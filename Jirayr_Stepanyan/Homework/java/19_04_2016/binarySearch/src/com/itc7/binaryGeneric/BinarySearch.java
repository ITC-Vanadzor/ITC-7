package com.itc7.binaryGeneric;

public class BinarySearch
{
	private int index;
	public BinarySearch(int cIndex)
	{
		this.index = cIndex;
	}
	
	public <T extends Comparable> int binarySearch(T[] t, int first, int last, T number)
	{
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
			else if(t[avarage].compareTo(number) < 0)
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
