package myannotations;
import java.lang.annotation.*;


@Retention(value= RetentionPolicy.RUNTIME)
public @interface Version{
     public double value();
}
