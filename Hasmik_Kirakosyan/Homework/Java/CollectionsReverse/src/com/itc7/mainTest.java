package com.itc7;

import java.util.LinkedList;
import java.util.Arrays;
import com.itc7.annotations.Reverse;
import com.itc7.collections.CollClass;

public class mainTest {
    public static void main (String [] args) {

        // initialize list
        LinkedList<Integer> list = new LinkedList<Integer>(Arrays.asList( 5, 22, 66));

        // get annotation parameter value and execute reverseAndPrint method
            boolean runnable = CollClass.class.getAnnotation(Reverse.class).value();
            if (runnable) {
                CollClass.reverseAndPrint(list);
            }
    }
}
