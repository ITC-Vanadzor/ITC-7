package com.itc7;
import  com.itc7.entities.Rectangle;
import  com.itc7.util.RectangleUtil;
public class Tester {
	public static void main(String[] args)
	{
		Rectangle rectangle = new Rectangle(5,4);
		rectangle.setter(10,6);
		System.out.println("Area: " + RectangleUtil.getArea(rectangle));
		System.out.println("Perimeter: " + RectangleUtil.getPerimeter(rectangle));		
	} 
}

