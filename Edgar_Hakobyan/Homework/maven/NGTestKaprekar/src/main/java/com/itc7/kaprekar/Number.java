package com.itc7.kaprekar;

import java.util.*;

public class Number {
    
    public static Vector<Integer> parseNumberToVector(int number) {
        Vector<Integer> vectorNumbers = new Vector<Integer>();
        while(number > 0) {
            vectorNumbers.add(number % 10);
            number /= 10;
        }
        return vectorNumbers;
    }
  
    public static int maxNumberInVector(Vector<Integer> vectorNumber) {
        Collections.sort(vectorNumber);
        int maxNumber = 0;
        for(int j=vectorNumber.size()-1; j>=0; --j){
            maxNumber += vectorNumber.get(j) * (int)Math.pow(10,j);
        }
        return maxNumber;
    }

    public static int minNumberInVector(Vector<Integer> vectorNumber) {
        Collections.sort(vectorNumber);
        int minNumber = 0;
        for(int i=0; i<vectorNumber.size(); ++i){
            minNumber += vectorNumber.get(i) * (int)Math.pow(10,vectorNumber.size()-i-1);
        }
        return minNumber;
    }


    public static int diff(int max, int min) {
        return max - min;
    }
    

}
