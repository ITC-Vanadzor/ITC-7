package com.itc7.apps;
import com.itc7.utils.App;


public class Test
{
    public static void main( String[] args )
    {
        String filePath = System.getProperty("jsonFileName");
        System.out.println("Need key value is "+App.getKeyValue("Author", filePath));
    }
}
