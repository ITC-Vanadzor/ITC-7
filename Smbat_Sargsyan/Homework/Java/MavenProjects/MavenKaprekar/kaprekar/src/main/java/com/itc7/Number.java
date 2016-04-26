package com.itc7;
import java.util.ArrayList;
import java.util.Collections;
public class Number {
	public int number;
	public ArrayList<Integer> array = new ArrayList<Integer>();
	public void init(int number) throws Exception {
		if(number < 0) throw Exception;
		this.number = number;
	}
	public void toDigits(int number) throws Exception{
		int temp = number;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);

	}
	public int minNum(ArrayList<Integer> array) throws Exception {
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}
	public int maxNum(ArrayList<Integer> array) throws Exception {
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	public String Diff(int number,int max,int min) throws Exception{
		toDigits(number);
		int ediff = max - min;
		String printFormat = "%0" + array.size() + "d\n";
 		System.out.printf(printFormat, diff);
                return printFormat;
	}
}


