package com.itc7.kaprekar;

import java.util.Scanner;
import java.util.Vector;
import com.itc7.kaprekar.*;

public class Kaprekar {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number: ");
        int number = in.nextInt();
        Vector<Integer> vec = Number.parseNumberToVector(number);
        String format = "%0" + vec.size() + "d\n";
        System.out.format("Result " + format, Number.diff( Number.maxNumberInVector(vec),Number.minNumberInVector(vec) ) );
    }
}
