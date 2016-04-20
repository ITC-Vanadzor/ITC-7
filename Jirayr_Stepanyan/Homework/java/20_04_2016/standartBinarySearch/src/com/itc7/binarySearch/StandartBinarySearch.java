package com.itc7.binarySearch;

import java.util.Arrays;
import java.lang.Number;
import java.util.Collections;

public class StandartBinarySearch
{
	public <T extends Number & Comparable<T>> void sort(T[] array)
	{
		Arrays.sort(array);
	}

	public <T extends Number & Comparable<T>> int binarySearch(T[] array, int value)
	{
		return Arrays.binarySearch(array, value);
	}
}