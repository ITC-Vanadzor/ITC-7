package projectRectangle.rectangleTester;

import projectRectangle.utils.RectangleUtil;
import projectRectangle.entities.Rectangle;
import java.lang.reflect.*;
import java.lang.annotation.*;
import java.util.Scanner;

public class RectangleTester
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int width = 0;
		System.out.println("please input width of rectangle: ");
		width = cin.nextInt();
		int height = 0;
		System.out.println("please input height of rectangle: ");
		height = cin.nextInt();
		Rectangle rectangle = new Rectangle(width, height);
		RectangleUtil rectangleUtil = new RectangleUtil(rectangle);
		rectangleUtil.computeArea();
		rectangleUtil.computePerimeter();
		try
		{
			Method m = rectangleUtil.getClass().getMethod("computeArea");
			Annotation[] areaCompute = m.getAnnotations();
			Method x = rectangleUtil.getClass().getMethod("computePerimeter");
			Annotation[] perimeterCompute = x.getAnnotations();
			for(Annotation a: areaCompute)
			{
				System.out.println(a);
			}
			for(Annotation b: perimeterCompute)
			{
				System.out.println(b);
			}
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}
}