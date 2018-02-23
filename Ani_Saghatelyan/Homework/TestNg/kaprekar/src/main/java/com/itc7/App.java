package com.itc7.kaprekar;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.InputMismatchException;
public class App {
	public static void main(String [] args) {
	    Number tiv = new Number();
        Scanner reader = new Scanner(System.in);
	/*    try
        {*/
    	    System.out.print("Enter the number ");
		    int  n = reader.nextInt();
            tiv.setNumber(n);
       /* }
        catch(InputMismatchException e)
        {
            System.out.println("Invalid input");
        }*/
        ArrayList<Integer> array=new ArrayList<Integer>();
		array=tiv.toDigits(n);
		int min=tiv.minNum(array);
		int max=tiv.maxNum(array);


		String format = "%0"+tiv.count(array)+"d\n";
		System.out.format("\n Result "+format, tiv.Diff(max,min));
	}
}
