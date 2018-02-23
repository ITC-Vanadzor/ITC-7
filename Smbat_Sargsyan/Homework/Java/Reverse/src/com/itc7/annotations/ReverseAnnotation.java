package com.itc7.annotations;
import java.lang.annotation.*;

@Target(value = ElementType.METHOD) 
@Retention(value = RetentionPolicy.RUNTIME)
public @interface ReverseAnnotation {
	public boolean reverseValue() default true;
}
