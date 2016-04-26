package com.itc7.kaprekar;
import java.util.ArrayList;
import java.util.Collections;
public class Number {
	private  int number;
	public ArrayList<Integer> myArray = new ArrayList<Integer>();
	
	
	
	public int minNum(ArrayList<Integer> arr) {
		int min=0;
		for(int j=0;j<arr.size();++j) {
			min = min*10 + arr.get(j);
		}
		return min;
	}
	public int maxNum(ArrayList<Integer> arr) {
		int max = 0;
		for(int j=arr.size()-1;j>=0;--j) {
			max = max*10 + arr.get(j);
		}
		return max;
	}
    
	public int count(ArrayList<Integer> arr) {
			  return arr.size();
	}
	public int Diff(int max, int min) {
		int diff = max - min;	
		return diff;
	}
    public ArrayList<Integer>  toDigits(int num) {
		ArrayList<Integer> array=new ArrayList<Integer>();
		int temp = num;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);
		return array;
	}
    public  void setNumber(int num) 
	{
	    number = num;
	}

}
