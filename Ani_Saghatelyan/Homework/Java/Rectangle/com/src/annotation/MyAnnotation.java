package annotation;
import java.lang.annotation.*;
import java.lang.reflect.*;
 public 	@interface setWidthAnno
	{
	public	String name();
	public	int countParams();
	}
	@Retention(RetentionPolicy.RUNTIME)
public	@interface commentAnno
	{
	public	String str() default "myComment";
	}

	@Retention(RetentionPolicy.RUNTIME)
public	@interface Author
	{
	public	String name();
	public	String date();
	}

