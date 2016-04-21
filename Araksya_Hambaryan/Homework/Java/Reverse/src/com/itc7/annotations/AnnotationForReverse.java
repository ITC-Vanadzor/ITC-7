package com.itc7.annotations;

import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD) 
public @interface AnnotationForReverse {
	public boolean value() default false;
}
