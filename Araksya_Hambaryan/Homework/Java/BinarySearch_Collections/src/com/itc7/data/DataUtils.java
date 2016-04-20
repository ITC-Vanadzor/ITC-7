package com.itc7.data;

import com.itc7.MainBinarySearch;
import java.util.Collections;
import java.util.ArrayList;

public class DataUtils {
    public static void fillIntegerData(ArrayList <Integer> list) {
	Integer[] intArray = {5, 6, 11, 20, 35};
	for (Integer item : intArray) {
	    list.add(item);    
	}
	Collections.sort(list);
    }
    
    public static void fillStringData(ArrayList <String> list) {
	String[] stringArray = {"a1", "b2", "c3", "d4"};
	for (String item : stringArray) {
	    list.add(item);    
	}
	Collections.sort(list);
    }
}
