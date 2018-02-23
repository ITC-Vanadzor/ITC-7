package com;

import com.entities.Rectangle;
import com.utils.RectangleUtil;

public class RectangleTester {
   
     public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        RectangleUtil util = new RectangleUtil();
        rect.setSideA(4);
        rect.setSideB(6);
        System.out.println("perimeter of rectangle: " + util.perimeter(rect));
        System.out.println("area of rectangle: " + util.area(rect));
    }

} 
