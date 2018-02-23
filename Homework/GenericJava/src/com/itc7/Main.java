package com.itc7;
import com.itc7.pair.*;
import com.itc7.pairUtils.*;
public class Main {
	public static void main(String[] args){
		String [] strArray = {"Hasmik","Ani","Araks"};
		
		System.out.println(PairUtils.minAndMax(strArray).getFirst());
		Integer [] intArray = {1,2,5,9};
		System.out.println(PairUtils.minAndMax(intArray).getSecond());
			
	}
}
