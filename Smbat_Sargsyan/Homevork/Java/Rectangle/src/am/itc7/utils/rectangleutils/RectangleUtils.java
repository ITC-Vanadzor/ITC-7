package am.itc7.utils.rectangleutils;
import am.itc7.entities.rectangle.Rectangle;
/**
 * Created by smb888 on 4/18/16.
 */
@ClassType(name = "RectangleUtils")
public class RectangleUtils {
    @MethodType(name = "area",value = 150)
    public static int area(Rectangle rectangle) {
        return rectangle.getLength() * rectangle.getWidth();
    }
    @MethodType(name = "perimeter",value = 50)
    public static int perimeter(Rectangle rectangle){
        return 2*(rectangle.getLength()+rectangle.getWidth());
    }
}
