import java.util.Vector;
import java.lang.Math;
import java.util.Scanner;

class kaprekar 
{
    public static void main(String[] args) 
    {
		Scanner cin = new Scanner(System.in);           
		int number = cin.nextInt();
		int tmp_number = number;
		Vector<Integer> vector = new Vector<Integer>();
		while(tmp_number > 0)
		{
		       vector.add(tmp_number % 10);
		       tmp_number /= 10;
		}
		int min = minimum(vector);
		int max = maximum(vector);
		int result = max - min;
		validation(vector, result);
    }

    public static int maximum(Vector<Integer> a)
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
		int x = 0;
		for(int t = 0; t < a.size(); ++t)
		{
			x += a.get(t) * Math.pow(10, (a.size() - (t + 1)));
		}
		return x;
    }

    public static int minimum(Vector<Integer> b)
    {
		for(int i = b.size() - 1; i > 0; --i)
		{
		    for(int j = 0; j < i; ++j)
		    {
				if(b.get(j) > b.get(j+1))
				{
				    Integer tmp = b.get(j);
				    b.set(j, b.get(j + 1));
				    b.set(j + 1, tmp);
				}
		    }
		}
		System.out.println();
		int x = 0;
		for(int t = 0; t < b.size(); ++t)
		{
			x += b.get(t) * Math.pow(10, (b.size() - (t + 1)));
		}
		return x;
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
