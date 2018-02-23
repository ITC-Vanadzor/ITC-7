package com.itc7.pairUtils;
import com.itc7.pair.*;
public class PairUtils {
	public static <T extends Comparable> Pair minAndMax(T[] array){
		T smallest = array[0];
		T biggest = array[0];
		for (int i = 1; i < array.length; i++){
			if (array[i].compareTo(smallest) < 0) {
				smallest = array[i];
			}
			else if(array[i].compareTo(biggest) >= 0 ) {
				biggest = array[i];
			}
		}
		Pair<T> pair = new Pair<T>(smallest,biggest);
		
		return pair;
	}
}
