package com.test;
import java.util.Scanner;
import com.test.entities.*;
import com.test.utils.*;

public class TestForRectangle {
    public static void main (String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Input rectangle width:   ");
		int width = reader.nextInt();
		System.out.print("Input rectangle height:  ");
		int height = reader.nextInt();
		
		Rectangle rectangle = new Rectangle(width, height);
		RectangleUtil.recProperties(rectangle);
    }    
}