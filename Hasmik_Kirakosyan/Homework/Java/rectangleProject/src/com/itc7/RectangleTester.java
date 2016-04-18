import com.itc7.utils.*;
import com.itc7.entities.*;

public class RectangleTester {
    public static void main (String[] args) {
        Point pointL = new Point(0,5);
        Point pointR = new Point(10,20);
        Rectangle rectangle = new Rectangle(pointL, pointR);
        RectangleUtil util = new RectangleUtil(rectangle);
        System.out.println("Rectangle area : "+util.rectArea());
        System.out.println("Rectangle perimeter : "+util.rectPerimeter());
    }
}
