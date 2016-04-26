//Kaprekar
package com.itc7.algorithm;

import java.util.*;

public class Kaprekar
{

	public static int toInt(List<Integer> x){
		int len=x.size();
		if(len>10) return -1;
		int ten=1;
		int res=0;
		for(int i=len-1;i>=0;--i){
			if(x.get(i) < 0 ) return -1;
			res+=ten*x.get(i);
			ten*=10;
		}
		return res;
	}
}
