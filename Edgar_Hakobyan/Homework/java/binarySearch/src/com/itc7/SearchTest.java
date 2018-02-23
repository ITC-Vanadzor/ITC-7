package com.itc7;

import java.util.ArrayList;

import com.itc7.binarySearch.BinarySearch;

public class SearchTest {

    public static void main(String[] args) {
        BinarySearch obj = new BinarySearch();
        Integer[] arr1 = {5,7,12,16,24,31};
        
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr.add(16);
        arr.add(7);
        arr.add(31);
        arr.add(5);
        arr.add(12);
        arr.add(24);
        
        
        System.out.println(obj.compare(arr,arr1,0,arr1.length,7));
        
        //System.out.println("index of value with collections binarusearch: " + obj.sortByCollections(arr, 7));
        
        //System.out.println("index of value with binarysearch: " + obj.binarySearch(arr1, 0, arr1.length, 7));
        
    }
}
