package com.itc7;
import java.util.List;
import java.lang.reflect.*;
import java.lang.Class;
import java.util.ArrayList;
import com.itc7.print.CollectionSample;
import java.lang.annotation.*;
import com.itc7.annotations.ReverseAnnotation;

public class Main
{
	public static void main(String[] args)
	{
		try {
			CollectionSample col = new CollectionSample();
			Method method = col.getClass().getMethod("printReverse");
			ReverseAnnotation m = method.getAnnotation(ReverseAnnotation.class);
			boolean b = m.reverseValue();
			if(!b) {
				List<Integer> intList = new ArrayList<Integer>();
				Integer [] intArray = {1,8,2,14,5,7};
				for(Integer i : intArray) {
					intList.add(i);	
				}
				CollectionSample.printReverse(intList); 
				List<String> strList = new ArrayList<String>();
				String [] strArray = {"Ani","Araks","Jirayr","Edgar","Hakob"};
				for(String s : strArray){
                        		strList.add(s);
               			}
				CollectionSample.printReverse(strList);
			}
		}catch(NoSuchMethodException exc) {
			System.out.println("not found");
		}
	

	}
}
