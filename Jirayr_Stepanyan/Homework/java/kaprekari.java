import java.util.Vector;
import java.lang.Math;
import java.util.Scanner;

class kaprekar 
{
    
    public static int min = 0;
    public static int max = 0;
    public static void main(String[] args) 
    {
		Scanner cin = new Scanner(System.in);           
		int number = cin.nextInt();
		Vector<Integer> vector = new Vector<Integer>();
		while(number > 0)
		{
		       vector.add(number % 10);
		       number /= 10;
		}
		Number n = new Number();
		n.max_min(vector);
		int result = max - min;
		n.validation(vector, result);
    }
    public static class Number 
    {
	public static void max_min(Vector<Integer> a)
	{
	    for(int i = a.size() - 1; i > 0; --i)
	    {
		for(int j = 0; j < i; ++j)
		{
		    if(a.get(j) < a.get(j+1))
		    {
			Integer tmp = a.get(j);
			a.set(j, a.get(j + 1));
			a.set(j + 1, tmp);
		    }
		}
	    }
	    for(int t = 0; t < a.size(); ++t)
	    {
		max += a.get(t) * Math.pow(10, (a.size() - (t + 1)));
	    }
	    for(int c = a.size() - 1; c >= 0; --c)
	    {
		min += a.get(c) * Math.pow(10, (c));
	    }
	}

	public static void validation(Vector<Integer> n, int m)
	{
	    int tmp = m;
	    int counter = 0;
	    while(tmp > 0)
	    {
		tmp /= 10;
		++counter;
	    }
	    if(counter == n.size())
	    {
		System.out.println(m);
	    }
	    else
	    {
		Vector<Integer> result = new Vector<Integer>();
		while(m > 0)
		{
		    result.insertElementAt((m % 10), 0);
		    m /= 10;
		}
		do
		{
		    result.insertElementAt(0, 0);
		}while(result.size() < n.size());
		for(Integer k : result)
		{
		    System.out.print(k);
		}
	    }
	}
    }
}
