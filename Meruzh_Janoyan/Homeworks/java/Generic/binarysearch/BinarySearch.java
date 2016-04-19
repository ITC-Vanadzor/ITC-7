package binarysearch;

public class BinarySearch{
	
	public static <T extends Number & Comparable<T>> int searchElement(T[] array,T k){
   		
   		return binarySearch(array, 0, array.length, k);
	}

	private static <T extends Number & Comparable<T>> int binarySearch(T[] array,int first,int last,T k){
		int index;
		if (last < first){
			return -1;
		}
   
	    int mid = (first + last) / 2;
     	if (array[mid].compareTo(k)==0){
     	 	index = mid;
     	 } 
     	else if (array[mid].compareTo(k)>0){
         	index = binarySearch(array, first, mid-1, k);
         }
     	else{
         	index = binarySearch(array, mid+1, last, k);
     	}

  		return index;
	}
}