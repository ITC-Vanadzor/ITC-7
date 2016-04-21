package com.itc7;

import com.itc7.data.DataUtils;
import java.util.ArrayList;

public class MainReverse{
    public static void main(String[] args) {
	ArrayList <Integer> intList = new ArrayList <Integer>();
	DataUtils.fillIntegerData(intList);
	
	ArrayList <String> stringList = new ArrayList <String>();
	DataUtils.fillStringData(stringList);
	
	DataUtils.printData(intList);
	DataUtils.printData(stringList);
    }    
}
