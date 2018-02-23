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
//Based on Areg's notes the previous version was more correct. My bad :))
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
//In case if this function should be used as utility it is preferable to declare it in a separate class.
// However in scope of this task it can be defined as private.

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
