import entities.*;
import utils.*;
import java.lang.annotation.*;
import java.lang.reflect.*;
	
public class RectangleTester
{

	public static void main(String [] args)
	{
		Rectangle myRect=new Rectangle(10,2);
		myRect.setWidth(4);
		
		RectangleUtils util=new RectangleUtils(myRect);
		System.out.println("width of Rectangle: "+myRect.getWidth());
		System.out.println("length of Rectangle: "+myRect.getLength());
		System.out.println("Perimeter of Rectangle: "+util.perimeter());
		System.out.println("Area of Rectangle: "+util.area());
		
	}
}
