package com.utils;

import com.entities.Rectangle;

public class RectangleUtil {

    public int perimeter(Rectangle rectangle) {
        return 2*(rectangle.getSideA() + rectangle.getSideB());
    }

    public int area(Rectangle rectangle) {
        return rectangle.getSideA() * rectangle.getSideB();
    }
   
}
