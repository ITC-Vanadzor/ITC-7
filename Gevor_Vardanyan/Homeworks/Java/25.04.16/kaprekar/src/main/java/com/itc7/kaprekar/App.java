package com.itc7.kaprekar;

import com.itc7.algorithm.Kaprekar;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class App 
{
    public static void main( String[] args )
    {
    	Scanner in = new Scanner(System.in);
	    
		System.out.print("Input  Number: ");
		int first = in.nextInt();

		String temp = Integer.toString(first);
		ArrayList<Integer> digits = new ArrayList<Integer>();		
		for (int i = 0; i < temp.length(); i++){
			digits.add(temp.charAt(i) - '0');
		}
		

		Collections.sort(digits);
		int small=Kaprekar.toInt(digits);

		Collections.sort(digits,Collections.reverseOrder());
		int big=Kaprekar.toInt(digits);

		System.out.println("Result: "+(big-small));
    }
}
