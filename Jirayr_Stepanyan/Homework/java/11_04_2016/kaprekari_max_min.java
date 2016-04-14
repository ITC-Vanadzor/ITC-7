import java.util.Collections
public class Number 
    {
		public void max_min(Vector<Integer> a)
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
		}

// This is an redundant function. The function declared above can return min and max numbers and solve the task.
// In case if this function cover the case related to the adding '0'. The solution of that case has been discussed during the lesson.

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
