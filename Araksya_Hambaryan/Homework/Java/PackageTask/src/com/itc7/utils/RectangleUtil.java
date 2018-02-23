package com.itc7.utils;

import com.itc7.entities.*;

public class RectangleUtil {
    private static int getArea (Rectangle rectangle){
	return rectangle.getWidth() * rectangle.getHeight();	
    }    

    private static int getPerimeter (Rectangle rectangle) {
	return 	2*(rectangle.getWidth() + rectangle.getHeight());
    }

    public static void printUtils (Rectangle rectangle) {
	System.out.println("Rectangle area --- " + getArea(rectangle));
	System.out.println("Rectangle perimeter --- " + getPerimeter(rectangle));
	
    }
}
