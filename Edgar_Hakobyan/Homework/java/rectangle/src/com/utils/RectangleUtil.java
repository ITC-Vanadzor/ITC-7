package com.utils;

import com.entities.Rectangle;

public class RectangleUtil extends Rectangle {

    public void setSides(int a,int b) {
        sideA = a;
        sideB = b;
    }

    public void printSides() {
        System.out.println("side 1 of rectengle: " + getSideA());
        System.out.println("side 2 of rectangle: " + getSideB());
    }

    public int perimeter() {
        return 2*(sideA + sideB);
    }

    public int area() {
        return sideA * sideB;
    }
   
}
