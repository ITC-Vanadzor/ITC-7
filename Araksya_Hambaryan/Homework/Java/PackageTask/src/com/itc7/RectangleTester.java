package com.itc7;

import com.itc7.entities.*;
import com.itc7.utils.*;
import java.util.Scanner;

public class RectangleTester {
    public static void main (String [] args) {
	Scanner reader = new Scanner(System.in);
	System.out.print("Enter rectangle width ");
	int width = reader.nextInt();
	System.out.print("Enter rectangle height ");
	int height = reader.nextInt();
	Rectangle rectangle = new Rectangle(width, height);
	RectangleUtil.printUtils(rectangle);
    }    
    
}
