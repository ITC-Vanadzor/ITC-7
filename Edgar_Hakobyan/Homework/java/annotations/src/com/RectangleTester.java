package com;

import com.entities.Rectangle;
import com.utils.RectangleUtil;
import java.lang.reflect.*;
import java.lang.annotation.*;

public class RectangleTester {
   
     public static void main(String[] args) {
        RectangleUtil rect = new RectangleUtil();
        rect.setSides(4,6);
        rect.printSides();
        System.out.println("perimeter of rectangle: " + rect.perimeter());
        System.out.println("area of rectangle: " + rect.area());

        try {
            Method m = rect.getClass().getMethod("Edgar");
            Annotation[] area = m.getAnnotations();
            for(Annotation i:area) {
                System.out.println(i);
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

} 
