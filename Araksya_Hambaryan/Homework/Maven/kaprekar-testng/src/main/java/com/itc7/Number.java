package com.itc7;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Locale;
import java.util.Scanner;

public class Number {
    public int number;
    public ArrayList<Integer> digitsArray = new ArrayList<Integer>();
   

    public void setNumber(int number){
	this.number=number;	
    }

    public ArrayList <Integer> toDigits() {
	    int temp = this.number;
	    while(temp > 0 ) {
	        this.digitsArray.add((Integer)temp%10);
	        temp = temp/10;
	    }
	    Collections.sort(this.digitsArray);
	    return this.digitsArray;

    }

    public int minNum(ArrayList <Integer> array) {
	    int min=0;
	    for(int j=0;j<array.size();++j) {
	        min = min*10 + array.get(j);
	    }
	    return min;
    }

    public int maxNum(ArrayList <Integer> array) {
	    int max = 0;
	    for(int j=array.size()-1;j>=0;--j) {
	        max = max*10 + array.get(j);
	    }
	    return max;
    }
    
    public String Diff(int max, int min, int arraySize) {
	    int diff = max - min;
	    String result=String.format("%0" + arraySize + "d\n", diff);
	    return result;
	    
    }
}


