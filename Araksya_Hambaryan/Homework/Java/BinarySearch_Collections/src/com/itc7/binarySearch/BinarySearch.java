package com.itc7.binarySearch;

import java.util.Collections;
import java.util.ArrayList;
import com.itc7.MainBinarySearch;
public class BinarySearch {
    
    public static <T extends Comparable<? super T>> boolean resultComparision(ArrayList <T> list, T element) {
	int myResult = myBinarySearch(list, 0, list.size(), element);
	int collectionResult = collectionBinarySearch(list, element);
	System.out.println("index ---" + myResult);
	System.out.println("index using Collections ---" + collectionResult);
	return myResult==collectionResult;
    }

    private static <T extends Comparable<? super T>> int collectionBinarySearch (ArrayList <T> list, T element) {
	Collections.sort(list);
	return Collections.binarySearch(list, element);	
    } 

    private static <T extends Comparable<?super T>> int myBinarySearch (ArrayList <T> list, int first, int last, T K) {
	if (last < first) {
	    return -1;
	}
	int index;
	int mid = (first + last) / 2;
	
	if (list.get(mid).compareTo(K) == 0) {
	    index = mid;
	} else if (list.get(mid).compareTo(K) > 0) {
	    index = myBinarySearch(list, first, mid-1, K);
	} else {
	    index = myBinarySearch(list, mid+1, last, K);
	}
	return index;
    }

}
