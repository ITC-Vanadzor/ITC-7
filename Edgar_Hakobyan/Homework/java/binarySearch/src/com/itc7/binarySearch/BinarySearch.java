package com.itc7.binarySearch;

import java.util.ArrayList;
import java.util.Collections;

public class BinarySearch {
    public static <T extends Number & Comparable<T>> int binarySearch(T[] array, int first, int last, T value){
        if (first <= last) {
            int mid = (first/2) + (last / 2);
            int cmp = array[mid].compareTo(value);
            if(cmp < 0) {
                return binarySearch(array, mid + 1, last, value);
            }
            if(cmp > 0) {
                return binarySearch(array, first, mid - 1, value);
            }
            return mid;
        }
        return -1;
    }
    
    public static <T extends Number & Comparable<T>> int sortByCollections(ArrayList<T> list, T value) {
        Collections.sort(list);
        return Collections.binarySearch(list,value);  
    }
    
    public <T extends Number & Comparable<T>> boolean compare(ArrayList<T> list, T[] array, int first, int last, T value) {
        return sortByCollections(list,value) == binarySearch(array, first, last, value);
    }
}
