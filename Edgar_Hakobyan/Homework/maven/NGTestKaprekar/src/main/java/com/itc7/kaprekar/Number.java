package com.itc7.kaprekar;

import java.util.*;

public class Number {

    private int number; 
    private Vector<Integer> vectorNumber;  
    private int maxNumber=0;
    private int minNumber=0;

    public Number(int n) {
        number = n;
        vectorNumber = parse();
    }
    
    private Vector<Integer> parse() {
        vectorNumber = new Vector<Integer>();
        while(number > 0) {
            vectorNumber.add(number % 10);
            number /= 10;
        }
        Collections.sort(vectorNumber);
        return vectorNumber;
    }
   
    public int max() {
        for(int j=vectorNumber.size()-1; j>=0; --j){
            maxNumber += vectorNumber.get(j) * (int)Math.pow(10,j);
        }
        return maxNumber;
    }

    public int min() {
        for(int i=0; i<vectorNumber.size(); ++i){
            minNumber += vectorNumber.get(i) * (int)Math.pow(10,vectorNumber.size()-i-1);
        }
        return minNumber;
    }

    public int diff() {
        return max() - min();
    }

    public int sizeNumber() {
        return vectorNumber.size();
    }
}
