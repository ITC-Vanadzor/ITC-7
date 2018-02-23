package entities;
import java.lang.annotation.*;
import java.lang.reflect.*;
import annotation.*;
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

	
		this.width=width;
	}
	public void setLength(int length)
	{
		this.length=length;
	}
	
	
}
