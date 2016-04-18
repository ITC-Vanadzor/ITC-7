import entities.*;
import utils.*;
import java.lang.annotation.*;
import java.lang.reflect.Method;


class RrectangleTest{
	public static void main(String[] argc){
		Rectangle rec=new Rectangle(5,6);

		int area=RectangleUtil.Area(rec);

		System.out.println("Rectangle Area: "+area);

		try {
	  		 Class c = rec.getClass();

	  		 // get the method example
	  		 Class[] cArg = new Class[2];
	       	 cArg[0] = int.class;
	    	 cArg[1] = int.class;
	   		 Method m = c.getMethod("set",cArg);

	   		// get the annotations
	   		Annotation[] annotation = m.getAnnotations();

		   // print the annotation
		   for (int i = 0; i < annotation.length; i++) {
		   		System.out.println(annotation[i]);
		  	 }
		   } 
		catch (NoSuchMethodException exc) {
		  		 exc.printStackTrace();
		   }
	   }
}