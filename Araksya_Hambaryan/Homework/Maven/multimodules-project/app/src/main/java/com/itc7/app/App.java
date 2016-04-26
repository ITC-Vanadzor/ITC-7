package com.itc7.app;

/**
 * Hello world!
 *
 */
import com.itc7.utils.AppUtils;
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello from App!" );
	AppUtils.print();
	//String a ="../../../../resources/data.json";
	AppUtils.readJSON();
    }
}
