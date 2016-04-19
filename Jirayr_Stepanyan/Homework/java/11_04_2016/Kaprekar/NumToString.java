import java.util.Scanner;
import java.util.Vector;

import java.util.Vector;

public class NumToString
{
	
	private Vector<Integer> vector;
	NumToString()
	{
		this.vector = new Vector<Integer>();
	}

	public void inputNumber()
	{
		System.out.println("please input a number: ");
		Scanner cin = new Scanner(System.in);           
		int number = cin.nextInt();
		while(number > 0)
		{
		    vector.add(number % 10);
		    number /= 10;
		}
		validKaprekar();
	}

	private void validKaprekar()
	{
		Kaprekari_max_min n = new Kaprekari_max_min(0, 0);
		int result = n.max_min(vector);
		n.validation(vector, result);
	}
}