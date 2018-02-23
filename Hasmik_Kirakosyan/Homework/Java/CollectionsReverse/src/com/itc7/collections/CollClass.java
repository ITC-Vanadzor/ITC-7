package com.itc7.collections;

import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import com.itc7.annotations.Reverse;

public class CollClass {

    @Reverse(value = false)
    public static <T> void reverseAndPrint (LinkedList<T> list) {
        Collections.reverse(list);
        for(Iterator<T> iter = list.iterator(); iter.hasNext(); ) {
            System.out.print(" " + iter.next());
        }
        System.out.println();
    }

}
