package myannotations;
import java.lang.annotation.*;

@Retention(value= RetentionPolicy.RUNTIME)
public @interface About{
     public String value();
     public String author() default "Nobody";
}