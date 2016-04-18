package com.entities;

public class Rectangle {
    protected int sideA;
    protected int sideB;
    
    protected void setSides(int a, int b) {
        sideA = a;
        sideB = b;
    }

    protected int getSideA() {
        return sideA;
    }

    protected int getSideB() {
        return sideB;
    }
}
