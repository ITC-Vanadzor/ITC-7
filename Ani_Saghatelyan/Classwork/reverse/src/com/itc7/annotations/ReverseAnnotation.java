package com.itc7.annotations;
import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD) 
public @interface ReverseAnnotation {
	public boolean reverseValue() default true;
}
