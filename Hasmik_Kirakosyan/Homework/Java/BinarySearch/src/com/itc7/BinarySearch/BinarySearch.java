package com.itc7.BinarySearch;
import java.lang.Number;

public class BinarySearch {
    public BinarySearch(){};
    public <T extends Number & Comparable<T>> int binarySearch( T[] E, int first, int last, T K) {
        int index;
        int mid = (first+last)/2;
        if (last < first)
            return  -1;
        if (E[mid].compareTo(K)==0 )
            index = mid;
        else if (E[mid].compareTo(K) < 0)
            index = binarySearch(E, first, mid-1, K);
        else
            index = binarySearch(E, mid+1, last, K);
        return index;
    }
}
