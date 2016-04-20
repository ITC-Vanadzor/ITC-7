//package com.itc7;
import com.itc7.BinarySearch.BinarySearch;
import java.util.ArrayList;

public class SearchTest {
    public static void main (String [] args) {
        BinarySearch test = new BinarySearch();
        Integer arraySimple[] = {1, 3, 5, 9};
        ArrayList<Integer> arrayList = new ArrayList<Integer>();
        arrayList.add(9);
        arrayList.add(1);
        arrayList.add(3);
        arrayList.add(5);
        System.out.println("Comparation : " + test.compareMethodReturns(arraySimple, arrayList, 5));
    }
}
