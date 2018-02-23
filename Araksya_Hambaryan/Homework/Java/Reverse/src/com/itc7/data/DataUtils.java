package com.itc7.data;

import com.itc7.MainReverse;
import com.itc7.annotations.AnnotationForReverse;
import java.util.Collections;
import java.util.ArrayList;
import java.util.Iterator;

public class DataUtils {
    public static void fillIntegerData(ArrayList <Integer> list) {
	Integer[] intArray = {5, 6, 11, 20, 35};
	for (Integer item : intArray) {
	    list.add(item);    
	}
    }
    
    public static void fillStringData(ArrayList <String> list) {
	String[] stringArray = {"a1", "b2", "c3", "d4"};
	for (String item : stringArray) {
	    list.add(item);    
	}
    }
    
    @AnnotationForReverse (value=true)
    public static <T extends Comparable> void printData (ArrayList <T> list) {
	Iterator<T> iterator = list.iterator();
	Collections.reverse(list);
	while (iterator.hasNext()) {
	    System.out.print(iterator.next() + " ");
	}
	System.out.println();
    }
}
