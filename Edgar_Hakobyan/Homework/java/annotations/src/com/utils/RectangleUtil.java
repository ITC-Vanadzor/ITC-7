package com.utils;

import com.entities.Rectangle;
import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention (RetentionPolicy.RUNTIME)
@interface Author {
    public String author();
}

@Author( author = "Edgar")
public class RectangleUtil extends Rectangle {

    public void setSides(int a,int b) {
        sideA = a;
        sideB = b;
    }

    public void printSides() {
        System.out.println("side 1 of rectengle: " + getSideA());
        System.out.println("side 2 of rectangle: " + getSideB());
    }
    
//    @Author( author = "Edgar")
    public int perimeter() {
        return 2*(sideA + sideB);
    }

//    @Author( author = "Hakobyan")
    public int area() {
        return sideA * sideB;
    }
   
}
