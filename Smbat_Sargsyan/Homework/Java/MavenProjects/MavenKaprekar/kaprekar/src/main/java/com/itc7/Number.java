package com.itc7;
import java.util.ArrayList;
import java.util.Collections;
public class Number {
	public int number;
	public ArrayList<Integer> array = new ArrayList<Integer>();
	public int init(int number) throws Exception {
		this.number = number;
		if(number < 0) throw new Exception();
		return number;
	}
	public ArrayList<Integer> toDigits(int number) throws Exception{
		int temp = number;
                while(temp > 0 ) {
                        array.add((int)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);
		return array;

	}
	public int minNum(int number) throws Exception {
		array = toDigits(number);
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}
	public int maxNum(int number) throws Exception {
		array = toDigits(number);
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	public String Diff(int number,int max,int min) throws Exception{
		toDigits(number);
		int diff = max - min;
		String printFormat = "%0" + array.size() + "d\n";
 		//System.out.printf(printFormat, diff);
                return printFormat;
	}
}


