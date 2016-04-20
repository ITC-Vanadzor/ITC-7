package com.itc7;

import java.util.ArrayList;
import com.itc7.reverse.Reverse;
import java.lang.annotation.*;
import com.itc7.annotations.ReverseAnnotation;

public class MainReverse {

    public static void main(String[] args) {
        ArrayList<Integer> arrInt = new ArrayList<Integer>();
        arrInt.add(5);
        arrInt.add(45);
        arrInt.add(15);

        ArrayList<String> arrStr = new ArrayList<String>();
        arrStr.add("a");
        arrStr.add("b");
        arrStr.add("c");
        arrStr.add("d");

        try {   
            Reverse reverse = new Reverse();
            Method method = reverse.getClass().getMethod("printReverseArray");
            ReverseAnnotation m = method.getAnnotation(ReverseAnnotation.class);
            if(m.reverseValue()){
                reverse.printReverseArray(arrInt);
                System.out.println();
                reverse.printReverseArray(arrStr);       
            }
        } catch (NoSuchMethodException exc) {
            System.out.println("not found");
        }
    }
}
