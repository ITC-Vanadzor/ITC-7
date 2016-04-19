package com.itc7.binary;
import java.lang.Number; 
public class Binary
{
  	public  static   <T extends Number & Comparable<T>>  int binarySearch(T [] array, int  first, int  last, T num)
	{
		int index=-1;
		int mid =(first + last)/2;

		if(last < first)
		{
			index=-1;
		}
		else if(num.compareTo(array[mid])==0)
		{
			index=mid;
		}
		else if (num.compareTo(array[mid])==-1)
		{
			mid=mid-1;
			binarySearch(array, first, mid, num);
		}
		else
		{	mid=mid+1;
			 binarySearch(array, mid, last, num);
		}
		return index;
	}

}
