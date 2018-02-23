package com.itc7.entities;

public class Rectangle {
    private Point leftCorner;
    private Point rightCorner;
 
    public Rectangle (Point p1, Point p2) {
        leftCorner  = p1;
        rightCorner = p2;
    }

    public void setLeftCorner (Point point) {
        leftCorner = point;
    }

    public void setRightCorner (Point point) {
        rightCorner = point;
    }

    public Point getLeftCorner () {
        return leftCorner;
    }
 
    public Point getRightCorner () {
        return rightCorner;
    }
}


