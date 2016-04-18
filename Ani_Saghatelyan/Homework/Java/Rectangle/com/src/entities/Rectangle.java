package entities;
import java.lang.annotation.*;
import java.lang.reflect.*;
@interface setWidthAnno
{
	String name();
	int countParams();
}
public class Rectangle
{
	private  int width;
	private int  length;
	

	public Rectangle(int width, int length)
	{
		this.width=width;
		this.length=length;
	}
	public  int getWidth()
	{
		return width;
	}
	public int getLength()
	{
		
		return length;
	}
	@setWidthAnno(name="setWidth", countParams=1)
	public void setWidth(int width)
	{
		Rectangle myRect=new Rectangle(1,0);

		try 
		{
			Class<?> c=myRect.getClass();
			Method m=c.getMethod("setWidth", int.class);
			Annotation anno=m.getAnnotation(setWidthAnno.class);
			System.out.println("Annotation for setWidth function "+ anno.name());	
		}catch (NoSuchMethodException exc)
		{
			System.out.println("No such a method");
		}
		this.width=width;
	}
	public void setLength(int length)
	{
		this.length=length;
	}
	
	
}
