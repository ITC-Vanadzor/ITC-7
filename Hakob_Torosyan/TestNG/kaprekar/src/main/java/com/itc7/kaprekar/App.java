package com.itc7.kaprekar;

import java.util.Scanner;

class App {
	public static void main(String args[]) {
		int number = 0;
		System.out.print("Please import number: ");
		Scanner scaner = new Scanner(System.in);
		number = scaner.nextInt();
		int temp = number;
                int length = 0;
                while(temp != 0){
                        temp = temp/10;
                        ++length;
                }
		int[] array = new int[length];
		array = getArray(number,length);
		sortArray(array);
		System.out.println("Difference between max and min values is: " + diffValues(array));
	}
	
	public static int[] getArray(int number, int length) {
		int[] array = new int[length];
		for(int i = 0; i < length; ++i){
			array[i] = number%10;
			number/=10;	
		}
		return array;
	}
	
	public static void sortArray(int[] array){
		int size = array.length;
		for(int i = 0; i < size; ++i){
			for(int j = 0; j < size-1; ++j){
				if(array[j] > array[j+1])
				{
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
			}		
		}	
	
	} 

	public static int diffValues(int[] array){
		int max_value = 0;
		int min_value = 0;
		for(int i = array.length-1; i >= 0; --i){
			max_value = max_value * 10 + array[i];
			min_value = min_value * 10 + array[array.length - i - 1];
		}
		return max_value - min_value;
	} 	
}
