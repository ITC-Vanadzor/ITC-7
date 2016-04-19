package utils;
import entities.Rectangle;
import java.lang.annotation.*;
import  java.lang.reflect.*;
import annotation.*;

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
			return 2*(rect.getLength()+rect.getWidth());
	}
	
	public float area()
	{
		return rect.getLength()*rect.getWidth();
	}
	
}
