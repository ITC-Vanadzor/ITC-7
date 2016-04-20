package am.itc7.entities.rectangle;
import java.lang.annotation.*;
/**
 * Created by smb888 on 4/19/16.
 */
@Target(value=ElementType.CONSTRUCTOR)
@Retention(value= RetentionPolicy.RUNTIME)
public @interface ConstructorType {
    String name() default "rectangle";
    FieldType [] fields() default {};
}
