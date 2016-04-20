package binarysearch;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;


public class BinarySearch{
	
	public static <T extends  Number & Comparable<T>> int searchElement(List<T> arrList,T k){
   		
   		return binarySearch(arrList, 0, arrList.size()-1, k);
	}

	private static <T extends Number & Comparable<T>> int binarySearch(List<T> arrList,int first,int last,T k){
		int index;
		if (last < first){
			return -1;
		}
   
	    int mid = (first + last) / 2;
     	if (arrList.get(mid).compareTo(k)==0){
     	 	index = mid;
     	 } 
     	else if (arrList.get(mid).compareTo(k)>0){
         	index = binarySearch(arrList, first, mid-1, k);
         }
     	else{
         	index = binarySearch(arrList, mid+1, last, k);
     	}

  		return index;
	}

  public static <T extends Number & Comparable<T>> String superCompare(T first, T second){
    if(first.compareTo(second)==0){
      return "Yes!";
    }
    else{
      return "No!";
    }
  }
}
