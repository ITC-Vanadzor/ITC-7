package am.itc7.test.rectangletest;
import am.itc7.entities.rectangle.Rectangle;
import static am.itc7.utils.rectangleutils.RectangleUtils.*;
import java.lang.reflect.*;
import java.lang.annotation.*;
/**
 * Created by smb888 on 4/18/16.
 */
public class RectangleTester {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(5,10);
        rectangle.setLength(10);
        rectangle.setWidth(15);
        System.out.println("area is " + area(rectangle));
        System.out.println("perimeter is " + perimeter(rectangle));

        try {
            Method method = rectangle.getClass().getMethod("getLength");
            Field field = rectangle.getClass().getField("radius");
            Constructor constructor = rectangle.getClass().getConstructor();
            Annotation [] methodAnnotations = method.getAnnotations();
            Annotation [] fieldAnnotations = field.getAnnotations();
            Annotation [] constructorAnnotations = constructor.getAnnotations();

            for(Annotation met : methodAnnotations){
                System.out.println(met);
            }
            System.out.println("+++++++++");

            for(Annotation fiel : fieldAnnotations){
                System.out.println(fiel);
            }
            System.out.println("+++++++++");
            
            for(Annotation con : constructorAnnotations){
                System.out.println(con);
            }


        } catch (Exception exc) {
            System.out.println("Not Found");
        }
    }
}
