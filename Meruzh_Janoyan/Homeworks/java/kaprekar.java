//kaprekar
import java.util.*;
import java.io.*;


class kaprekar
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader in = new BufferedReader(
	    new InputStreamReader(System.in));
	    
		System.out.print("Input  Number: ");
		int first = Integer.parseInt(in.readLine());

		String temp = Integer.toString(first);
		List<Integer> digitsBig = new ArrayList<Integer>();		
		for (int i = 0; i < temp.length(); i++){
			digitsBig.add(temp.charAt(i) - '0');
		}
		List<Integer> digitsSmall= new ArrayList<Integer>(digitsBig);

		Collections.sort(digitsSmall);
		Collections.sort(digitsBig,Collections.reverseOrder());
		System.out.println("Result: "+(toInt(digitsBig)-toInt(digitsSmall)));


	}

	public static int toInt(List<Integer> x){
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
