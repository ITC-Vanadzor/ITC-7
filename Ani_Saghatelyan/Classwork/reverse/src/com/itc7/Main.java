package com.itc7;
import java.util.List;
import java.util.ArrayList;
import com.itc7.print.CollectionSample;
import java.lang.annotations.*;

public class Main
{
	public static void main(String[] args)
	{
		//Method method = getMethod("false");
		List<Integer> list = new ArrayList<Integer>();
		Integer [] intArray = {1,8,2,14,5,7};
		for(Integer i : intArray) 
		{
			list.add(i);	
		}
		CollectionSample.print(list); 
		List<String> strlist = new ArrayList<String>();
		String [] strArray = {"Ani","Araks","Jirayr","Edgar","Hakob"};
		for(String s : strArray)
                {
                        strlist.add(s);
                }
		CollectionSample.print(strlist);
	}

}
