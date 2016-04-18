package am.itc7.utils.rectangleutils;

import java.lang.annotation.*;

/**
 * Created by smb888 on 4/19/16.
 */
@Target(value=ElementType.TYPE)
@Retention(value= RetentionPolicy.RUNTIME)
public @interface ClassType {
        String name() default "RectangleUtils";
}
