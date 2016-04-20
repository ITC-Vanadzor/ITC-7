package com.itc7.annotations;

import java.lang.annotation.*;

@Retention(RetentionPolicy.RUNTIME)
public @interface Reverse {
    public boolean value() default true;
}
