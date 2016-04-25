package com.itc7.kaprekar;
import java.util.Scanner;

class Kaprekar {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Number numObj = new Number(n);
		String format = "%0"+numObj.count()+"d\n";
		System.out.format("\n Result "+format, numObj.diff());
	}
}
