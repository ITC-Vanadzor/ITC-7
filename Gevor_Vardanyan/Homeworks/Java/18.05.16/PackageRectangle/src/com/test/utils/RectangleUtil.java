package com.test.utils;
import com.test.entities.*;

public class RectangleUtil {
    private static int area (Rectangle rectangle){
	   return rectangle.width() * rectangle.height();	
    }    

    private static int perimeter (Rectangle rectangle) {
	   return 	2*(rectangle.width() + rectangle.height());
    }

    public static void recProperties (Rectangle rectangle) {
	   System.out.println("Rectangle area :        " + area(rectangle));
	   System.out.println("Rectangle perimeter :   " + perimeter(rectangle));
	
    }
}