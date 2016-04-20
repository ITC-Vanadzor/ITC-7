package myreverse;

import myannotations.Version;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;
import java.lang.reflect.Method;
import java.lang.annotation.*;


public class  MyReverse{

	@Version(3)
	public void iteratorPrint(List<Integer> intArrList){
        try {
        	Class c = this.getClass();
	  		Method m = c.getMethod("iteratorPrint",List.class);
	  		Version v = m.getAnnotation(Version.class);

	  		if(v.value()>5){
	  			print(intArrList);
	  		}
	  		else
	  		{
	  			Collections.reverse(intArrList);
	  			print(intArrList);
	  		}
		   } 
		catch (NoSuchMethodException exc) {
		  		 exc.printStackTrace();
		   }
	}

	private void print(List<Integer> intArrList){
		Iterator<Integer> intItr = intArrList.iterator();
        while(intItr.hasNext()) {
           System.out.print(intItr.next() + " ");
        }
        System.out.println();
	}



}
