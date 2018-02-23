package com.itc7.BinarySearch;

import java.lang.Number;
import java.util.Collections;
import java.util.ArrayList;

public class BinarySearch {
    public BinarySearch(){};
    
    public <T extends Number & Comparable<T>> int binarySearch(T[] E, int first, int last, T K) {
        int index;
        int mid = (first+last)/2;
        if (last < first)
            return  -1;
        if (E[mid].compareTo(K)==0 )
            index = mid;
        else if (E[mid].compareTo(K) > 0)
            index = binarySearch(E, first, mid - 1, K);
        else
            index = binarySearch(E, mid+1, last, K);
        return index;
    }

   public <T extends Number & Comparable<T>> int searchByCollection (ArrayList<T> E, T K) {
       Collections.sort( E );
       return Collections.binarySearch(E, K);  
   }

   public <T extends Number & Comparable<T>> boolean compareMethodReturns (T[] arrSimple, ArrayList<T> arrList,T K) {
       System.out.println(binarySearch(arrSimple, 0, arrSimple.length, K));
       System.out.println("array.length " + arrSimple.length);
       System.out.println(searchByCollection(arrList, K));
       return ( binarySearch(arrSimple, 0, arrSimple.length, K) == searchByCollection(arrList, K) );
   }

}
