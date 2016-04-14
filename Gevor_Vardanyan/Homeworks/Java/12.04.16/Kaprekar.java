//Kaprekar
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

class Kaprekar
{
	public static void main (String[] args)
	{
		Scanner in = new Scanner(System.in);
	    
		System.out.print("Input  Number: ");
		int first = in.nextInt();

		String temp = Integer.toString(first);
		ArrayList<Integer> digits = new ArrayList<Integer>();		
		for (int i = 0; i < temp.length(); i++){
			digits.add(temp.charAt(i) - '0');
		}
		

		Collections.sort(digits);
		int small=toInt(digits);

		Collections.sort(digits,Collections.reverseOrder());
		int big=toInt(digits);

		System.out.println("Result: "+(big-small));


	}

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
