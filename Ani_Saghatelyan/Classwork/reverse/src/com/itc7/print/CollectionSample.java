package com.itc7.print;

import com.itc7.annotations.ReverseAnnotation;
import java.util.Iterator;
import java.util.List;
import java.util.Collections;
public class CollectionSample
{
	
@ReverseAnnotation(reverseValue = false)
public static<T extends List> void print(T list)
	{
		Iterator<T> iterator = list.iterator();
		Collections.reverse(list);
		while (iterator.hasNext()) {
			System.out.print(iterator.next() + " ");
		}			
	}
}
