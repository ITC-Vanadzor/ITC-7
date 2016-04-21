import java.util.*;
import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@interface MySingle { 
	boolean value();
}
public class Collection {
	@MySingle(true)
	public static boolean myMeth() { 
		Single ob = new Single();
		try {
			Method m = ob.getClass().getMethod("myMeth");
			MySingle anno = m.getAnnotaion(MySingle.class);
			return anno.value();
		} catch (NoSuchMethodException exc) {
			System.out.println("Method has not found!!!");
		}
	}
	public static void main(String args[]) {
		LinkedHashSet<String> lhs = new LinkedHashSet<String>();
		lhs.add("Hasmik");
		lhs.add("Ani");
		lhs.add("Jirayr");
		lhs.add("Edgar");
		lhs.add("Samson");
		if(!myMeth()) {
			System.out.println(lhs);
		} else {
			Coolections.reverse(lhs);
			System.out.println(lhs);
		}		
	}
}
