package com.itc7;
import java.util.Scanner;

public class App {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Kaprekar numObj = new Kaprekar();
		String format = "%0"+numObj.count(n)+"d\n";
		System.out.format("\n Result "+format, numObj.diff(n));
	}
}
