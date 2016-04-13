import java.util.*;
import java.io.*;

public class kaprekar
{
	public static void main (String[] args) 
	 throws java.lang.Exception {
		BufferedReader in = new BufferedReader(
	    new InputStreamReader(System.in));
	    
		System.out.print("Input Number  :  ");
		int num = Integer.parseInt(in.readLine());

		String temp = Integer.toString(num);
		ArrayList<Integer> digitsBig = new ArrayList<Integer>();		
		for (int i = 0; i < temp.length(); ++i){
			digitsBig.add(temp.charAt(i) - '0');
		}
		List<Integer> digitsSmall= new ArrayList<Integer>(digitsBig);

		Collections.sort(digitsSmall);
		Collections.sort(digitsBig,Collections.reverseOrder());
		int directOrder = parser(digitsBig);
		int reverseOrder = parser(digitsSmall);
		System.out.println("Direct Order  :  "+directOrder);
		System.out.println("Reverse Order :  "+reverseOrder);
		System.out.println("Result: "+(directOrder-reverseOrder));


	}

	public static int parser(List<Integer> x){
		int len=x.size();
		int ladder=1;
		int res=0;
		for(int i=len-1; i>=0; --i) {
			res+=ladder*x.get(i);
			ladder*=10;
		}
		return res;
	}
}
