package com.itc7.kaprekar;
import java.util.Scanner;
import java.util.ArrayList;
public class App {
	public static void main(String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter the number ");
		int n = reader.nextInt();
		Number tiv = new Number();
		tiv.setNumber(n);
		ArrayList<Integer> array=new ArrayList<Integer>();
		array=tiv.toDigits(n);
		int min=tiv.minNum(array);
		int max=tiv.maxNum(array);


		String format = "%0"+tiv.count(array)+"d\n";
		System.out.format("\n Result "+format, tiv.Diff(max,min));
	}
}
