//Kaprekar
package com.itc7.algorithm;

import java.util.ArrayList;

public class Kaprekar
{

	public static int toInt(ArrayList<Integer> x){
		int len=x.size();
		int ten=1;
		int res=0;
		for(int i=len-1;i>=0;--i){
			res+=ten*x.get(i);
			ten*=10;
		}
		return res;
	}
}
