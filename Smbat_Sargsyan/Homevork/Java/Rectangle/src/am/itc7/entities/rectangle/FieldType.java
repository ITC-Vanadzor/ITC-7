package am.itc7.entities.rectangle;
import java.lang.annotation.*;
/**
 * Created by smb888 on 4/19/16.
 */
@Target(value=ElementType.FIELD)
@Retention(value= RetentionPolicy.RUNTIME)
public @interface FieldType {
    String name() default "parameter";
    int value() default 1;
}
