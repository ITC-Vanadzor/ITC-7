package com.itc7;

import java.util.LinkedList;
import java.util.Arrays;
import com.itc7.annotations.Reverse;
import com.itc7.collections.CollClass;
import java.lang.annotation.Annotation; 
import java.lang.reflect.Method; 

public class mainTest {
    public static void main (String [] args) {

        // initialize list
        LinkedList<Integer> list = new LinkedList<Integer>(Arrays.asList( 5, 22, 66));

       // get annotation parameter value and execute reverseAndPrint method
        try {
            boolean runnable = CollClass.class.getAnnotation(Reverse.class).value();
            if (runnable) {
                CollClass.reverseAndPrint(list);
            }
        }
        catch (Exception exc) {
            System.out.println("Null pointer exception ");
        }

        /*for (Annotation annotation : CollClass.class.getAnnotations()) {
            Class<? extends Annotation> type = annotation.annotationType();
            System.out.println("Values of " + type.getName());

            for (Method method : type.getDeclaredMethods()) {
                Object value = method.invoke(annotation, new Object[0]);
            System.out.println(" " + method.getName() + ": " + value);
            }
        }*/
    }
}
