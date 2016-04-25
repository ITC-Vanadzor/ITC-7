package com.itc7.kaprekar;
import java.util.ArrayList;
import java.util.Collections;
public class Number {
	private  int number;
	private ArrayList<Integer> array = new ArrayList<Integer>();

    public Number(int number1) {
		number = number1;
		//toDigits();
	}
	public ArrayList<Integer>  toDigits() {
		int temp = number;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);
		return array;
	}

    public int minNum() {
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}

    public int maxNum() {
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	
	public int count() {
			  return array.size();
	}
	public int diff() {
		int diff = maxNum() - minNum();	
		return diff;
	}
}


