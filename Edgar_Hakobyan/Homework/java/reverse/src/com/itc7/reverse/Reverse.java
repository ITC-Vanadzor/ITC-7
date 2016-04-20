package com.itc7.reverse;

import java.lang.reflect.Method;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

import com.itc7.annotations.ReverseAnnotation;


public class Reverse {

    @ReverseAnnotation(reverseArr = true)
        public static <T extends List> void printReverseArray(T array) {
            Iterator<T> itr = array.iterator();
            Collections.reverse(array);
            while(itr.hasNext()) {
                System.out.print(itr.next() + " ");
            }
        }
}
