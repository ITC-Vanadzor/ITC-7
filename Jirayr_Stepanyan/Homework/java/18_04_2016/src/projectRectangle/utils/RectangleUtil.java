package projectRectangle.utils;

import projectRectangle.entities.*;
import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention (RetentionPolicy.RUNTIME)
@interface MyAnnotation
{
	String rectangle();
}

public class RectangleUtil
{
	Rectangle rectangle;
	int area;
	int perimeter;
	public RectangleUtil(Rectangle a)
	{
		this.rectangle = a;
		this.area = rectangle.getWidth() * rectangle.getHeight();
		this.perimeter = (2 * rectangle.getWidth()) + (2 * rectangle.getHeight());
	}

	@MyAnnotation(rectangle = "----------computeArea------------")
	//@SafeVarargs
	public void computeArea()
	{
		System.out.println("the area of rectangle = " + area);
	}

	@MyAnnotation(rectangle = "----------computePerimeter------------")
	//@SafeVarargs
	public void computePerimeter()
	{
		System.out.println("the perimeter of rectangle = " + perimeter);
	}
}