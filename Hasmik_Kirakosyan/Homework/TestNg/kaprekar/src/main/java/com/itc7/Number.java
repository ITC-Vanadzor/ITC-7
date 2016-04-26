package com.itc7.kaprekar;

import java.util.ArrayList;
import java.util.Collections;

public class Number {

    public ArrayList<Integer>  toDigits(int n) {
        ArrayList<Integer> array = new ArrayList<Integer>();
                while(n > 0 ) {
                        array.add(n%10);
                        n = n/10;
                }
        Collections.sort(array);
		return array;
	}

    public int minNum(ArrayList<Integer> array) {
		int min=0;
		for(int j = 0; j < array.size(); ++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}

    public int maxNum(ArrayList<Integer> array) {
		int max = 0;
		for(int j = array.size()-1; j >= 0; --j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
    
    public int count(int n) {
        int count = 0;
        while (n > 0) {
            n /=10;
            count++;
        }
        return count;
    }    

	public int diff(int number) {
        ArrayList<Integer> array = toDigits(number);
        int min = minNum(array);
        int max = maxNum(array);
		int diff = max - min;	
		return diff;
	}

}


