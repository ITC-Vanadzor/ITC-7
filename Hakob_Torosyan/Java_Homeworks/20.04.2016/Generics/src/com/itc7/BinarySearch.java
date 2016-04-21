package src.com.itc7;

public class BinarySearch <T> {
	public static <T extends Comparable> int binarySearch (T[] E, int first, int last, T K) {
		if (last < first)
      		{	
			int index = -1;
		}
   		else
      			int mid = (first + last) / 2;
     			if (K = E[mid])
			{
			      int index = mid;
			}
      			else if (K < E[mid])
			{         		
			     int index = binarySearch(E, first, mid – 1, K);
			}
      			else
			{         			
			        int index = binarySearch(E, mid + 1, last, K);
			}   		
			return index;
	}	

}
