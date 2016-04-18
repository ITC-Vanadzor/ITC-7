import entities.*;
import utils.*;

class RrectangleTest{
	public static void main(String[] argc){
		Rectangle rec=new Rectangle(5,6);

		int area=RectangleUtil.Area(rec);

		System.out.println("Rectangle Area: "+area);
	}
}
