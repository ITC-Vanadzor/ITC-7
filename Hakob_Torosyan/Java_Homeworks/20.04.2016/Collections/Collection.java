//import src.com.itc7.BinarySearch;
import java.util.*;
import java.util.Iterator;
	public class Collection {
	
	public static void main(String args[]) { 
		ArrayList<Integer> in = new ArrayList<Integer>();
		for(int i = 0; i < 10; i = i+2)
		{
			in.add(i);
		}
		Iterator<Integer> itr = in.iterator();
		while(itr.hasNext())
		{
			Integer element = itr.next();
			System.out.println(element + " ");
		}
		System.out.println();
		
		TreeSet<String> ts = new TreeSet<String>();
		ts.add("Armen");
		ts.add("Samson");
		ts.add("Shahen");
		ts.add("Heriqnaz");
		ts.add("Artemida");
		ListIterator<String> litr = ts.listIterator();
		while(litr.hasNext())
		{
			String elem = litr.next();
			System.out.println(elem + " ");
		}
		System.out.println();
		 		

		Collections.sort(in);
		search with our own binarySearch function
		System.out.println("With our own function: " + BinarySearch.binarySearch(in, 0, in.size(), 8);
		//search with standard function from ArrayList class
		System.out.println("Standard binarysearhc:  " + Collections.binarySearch(litr, "Gerasim") );
	}
}
