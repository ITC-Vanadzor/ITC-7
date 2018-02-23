import entities.*;
import utils.*;
import java.lang.annotation.*;
import java.lang.reflect.*;
import annotation.*;	
public class RectangleTester
{

	public static void main(String [] args)
	{
		Rectangle myRect=new Rectangle(10,2);
		myRect.setWidth(4);
		RectangleUtils util=new RectangleUtils(myRect);

		try 
		{
		  Method method =util.getClass().getMethod("perimeter");
		  Annotation annos[]=method.getAnnotations();
		  System.out.println("All annotations for this class: ");
		  for(Annotation a:annos)
		  {
			System.out.println(a);
		  }
			
		}catch(NoSuchMethodException exc)
			{
				System.out.println("The method doesn't exists.");			}

/*		try 
		{
			Class<?> c=myRect.getClass();
			Method m=c.getMethod("setWidth", int.class);
			Annotation anno=m.getAnnotation(setWidthAnno.class);
			System.out.println("Annotation for setWidth function "+ anno.name());	
		}catch (NoSuchMethodException exc)
		{
			System.out.println("No such a method");
		}	*/
		System.out.println("width of Rectangle: "+myRect.getWidth());
		System.out.println("length of Rectangle: "+myRect.getLength());
		System.out.println("Perimeter of Rectangle: "+util.perimeter());
		System.out.println("Area of Rectangle: "+util.area());
	
	}
}
