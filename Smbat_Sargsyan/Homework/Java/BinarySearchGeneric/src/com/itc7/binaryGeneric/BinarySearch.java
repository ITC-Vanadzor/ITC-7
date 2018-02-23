package com.itc7.binaryGeneric;
import java.util.List;
public class BinarySearch
{
	public static <V extends Number & Comparable<V> >  int binarySearch(List<V> tList, int first, int last, V element)
	{
		int index;
		if(last < first)
		{
			return -1;
		}
			int average = (last + first)/2;
			if(tList.get(average).equals(element))
			{
				index = average;
			}
			else if(tList.get(average).compareTo(element) > 0)
			{
				index = binarySearch(tList, first, average - 1, element);
			}
			else
			{
				index = binarySearch(tList, average + 1, last, element);	
			}
		
		return index;
	}
}
