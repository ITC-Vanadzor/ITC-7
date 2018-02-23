import com.itc7.utils.*;
import com.itc7.entities.*;
import java.lang.reflect.*;

public class RectangleTester {
    public static void main (String[] args) {
        Point pointL = new Point(0,5);
        Point pointR = new Point(10,20);
        Rectangle rectangle = new Rectangle(pointL, pointR);
        RectangleUtil util = new RectangleUtil(rectangle);
        System.out.println("Rectangle area : "+util.rectArea());
        System.out.println("Rectangle perimeter : "+util.rectPerimeter());
        

        try {
            Method m = util.getClass( ).getMethod("rectArea");
            Annotation[] annotations = m.getAnnotations();
            System.out.println("All annotations:");
            for(Annotation a : annotations)
                System.out.println(a);
        } catch (NoSuchMethodException exc) {
            System.out.println("Method Not Found.");
        }
    }
}


