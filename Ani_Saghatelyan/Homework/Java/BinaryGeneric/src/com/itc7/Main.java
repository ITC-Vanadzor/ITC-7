package com.itc7;
import com.itc7.binary.*;
public  class Main
{
	 public  static  void main (String[] args)
	 {
         	 Integer array[] = {1,3,4,5,6};
		 Double[] doubleArray = { 1.1, 2.2, 3.3, 4.4 };
         	 System.out.println("Index of number is  for int : "+ Binary.binarySearch(array, 0, 5, 5));
		 System.out.println("Index of number is for double : "+ Binary.binarySearch(doubleArray, 0, 5, 3.3));
	}
}
