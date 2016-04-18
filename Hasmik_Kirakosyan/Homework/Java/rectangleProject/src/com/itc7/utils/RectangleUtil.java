package com.itc7.utils;
import com.itc7.entities.*;

public class RectangleUtil {
    private Rectangle rect;
    private int height;
    private int width;
    
    public RectangleUtil (Rectangle rect1) {
        rect = rect1;
        countHeight();
        countWidth();
    }

    private void countHeight () {
        height = Math.abs((rect.getRightCorner().getY() - rect.getLeftCorner().getY())); 
    }

    private void countWidth () {
        width = Math.abs((rect.getRightCorner().getX() - rect.getLeftCorner().getX()));
    }

    public int rectArea() {
        return width*height;
    }

    public int rectPerimeter() {
        return 2*(width+height);
    }
}
