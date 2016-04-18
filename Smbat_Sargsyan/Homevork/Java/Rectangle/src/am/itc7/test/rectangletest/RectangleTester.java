package am.itc7.test.rectangletest;
import am.itc7.entities.rectangle.Rectangle;
import am.itc7.utils.rectangleutils.RectangleUtils;
/**
 * Created by smb888 on 4/18/16.
 */
public class RectangleTester {
    public static void main(String [] args){
        Rectangle rectangle = new Rectangle();
        rectangle.setLength(10);
        rectangle.setWidth(15);
        System.out.println("area is " + RectangleUtils.area(rectangle));
        System.out.println("perimeter is " + RectangleUtils.perimeter(rectangle));
    }
}
