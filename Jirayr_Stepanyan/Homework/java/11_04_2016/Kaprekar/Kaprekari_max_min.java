import java.util.Collections;
import java.lang.Math;
import java.util.Vector;

public class Kaprekari_max_min 
    {
    	private int max;
		private int min;
		Kaprekari_max_min(int cMax, int cMin)
		{
			this.max = cMax;
			this.min = cMin;
		}
		public int max_min(Vector<Integer> a)
		{
		    Collections.sort(a);
		    for(int t = 0; t < a.size(); ++t)
		    {
				max += a.get(t) * Math.pow(10, (a.size() - (t + 1)));
		    }
		    for(int c = a.size() - 1; c >= 0; --c)
		    {
				min += a.get(c) * Math.pow(10, (c));
		    }
		    return max - min;
		}

		public void validation(Vector<Integer> n, int m)
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