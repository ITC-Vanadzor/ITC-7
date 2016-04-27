package com.itc7;
import java.util.ArrayList;
import java.util.Scanner;
class Kaprekar {
    public static void main(String [] args) {
	/*Scanner reader = new Scanner(System.in);
	System.out.print("Enter the number ");
	int n = reader.nextInt();*/
	Number tiv = new Number();
	tiv.setNumber(100);
	ArrayList<Integer> tmpArray = new ArrayList<Integer>();
	tmpArray=tiv.toDigits(tiv);
	int max = tiv.maxNum(tmpArray);
	int min = tiv.minNum(tmpArray);
	System.out.println("Kaprekar number is " + tiv.Diff(max, min, tmpArray.size()));
    }
}
