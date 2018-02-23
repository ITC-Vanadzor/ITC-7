package com.itc7.annotations;

import java.lang.annotation.Retention;
import java.lang.annotation.Target;

@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)
public @interface ReverseAnnotation {
	public boolean reverseArr() default true;
}
