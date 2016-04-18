package com.itc7.utils;
import com.itc7.entities.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@interface Version {
    public int version();
    String author() default "Hasmik";
} 

@Retention(RetentionPolicy.RUNTIME)
@interface Describe {
    public int paramsNum();
    public String methodName();
}

@Version(version = 1, author = "Another Author")
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

    @Describe(paramsNum=0, methodName="rectArea")
    public int rectArea() {
        return width*height;
    }

    @Describe(paramsNum=0, methodName="rectPeRImeter")
    public int rectPerimeter() {
        return 2*(width+height);
    }
}
