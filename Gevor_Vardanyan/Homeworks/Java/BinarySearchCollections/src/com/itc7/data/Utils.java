package com.itc7.data;
import com.itc7.MainBinarySearch;
import java.util.Collections;
import java.util.ArrayList;

public class Utils {
    public static void forInteger(ArrayList <Integer> list) {
		Integer[] intArray = {2, 1, 18, 23, 25, 44, 3, 18, 27};
		for (Integer item : intArray) {
	    	list.add(item);    
		}
		Collections.sort(list);
    	}
    
    public static void forString(ArrayList <String> list) {
		String[] stringArray = {"DY62", "EC59", "AA25", "A65", "BGU", "RUDN"};
		for (String item : stringArray) {
	    	list.add(item);    
		}
		Collections.sort(list);
    }
}
