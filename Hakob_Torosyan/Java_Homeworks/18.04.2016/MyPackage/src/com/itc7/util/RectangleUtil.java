package com.itc7.util;
import com.itc7.entities.Rectangle;
public class RectangleUtil {
	public static int getArea(Rectangle rectangle) {	
		return rectangle.getHeight() * rectangle.getWidth();	
	}		
	public static int getPerimeter(Rectangle rectangle) {
		return (rectangle.getHeight() + rectangle.getWidth()) * 2;
	}
}
