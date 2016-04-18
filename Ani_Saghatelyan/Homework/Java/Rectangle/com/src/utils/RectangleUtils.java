package utils;
import entities.Rectangle;
import java.lang.annotation.*;
import  java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@interface commentAnno
{
	String str() default "myComment";
}

@Retention(RetentionPolicy.RUNTIME)
@interface Author
{
	String name();
	String date();
}
public class RectangleUtils
{
        private Rectangle rect;
	public RectangleUtils(Rectangle rect)
	{
		this.rect=rect;
	}
        @Author(name = "Ani Saghatelytan",date = "18/04/2016")
	@commentAnno(str="Returns the perimeter")
	public float perimeter()
	{
		RectangleUtils util=new RectangleUtils(rect);
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

		return 2*(rect.getLength()+rect.getWidth());
	}
	
	public float area()
	{
		return rect.getLength()*rect.getWidth();
	}
	
}
