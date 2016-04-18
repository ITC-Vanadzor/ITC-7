package com;

import com.entities.Rectangle;
import com.utils.RectangleUtil;

public class RectangleTester {
   
     public static void main(String[] args) {
        RectangleUtil rect = new RectangleUtil();
        rect.setSides(4,6);
        rect.printSides();
        System.out.println("perimeter of rectangle: " + rect.perimeter());
        System.out.println("area of rectangle: " + rect.area());
    }

} 
