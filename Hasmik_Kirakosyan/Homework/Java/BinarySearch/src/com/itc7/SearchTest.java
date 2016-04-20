package com.itc7;
import com.itc7.BinarySearch.*;

public class SearchTest {
    public static void main (String [] args) {
        BinarySearch test = new BinarySearch();
        Integer array[] =  {1, 3, 5, 9};
        System.out.println("Needed number index is : "+test.binarySearch(array, 0, array.length, 5));
    }
}
