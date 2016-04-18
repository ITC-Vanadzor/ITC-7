package myannotations;
import java.lang.annotation.*;

@Retention(value= RetentionPolicy.RUNTIME)
public @interface Project{
     public Version version();
     public About about();     
}