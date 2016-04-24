package com.itc7.app;

import java.io.FileReader;
import java.util.Iterator;
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;

public class Util 
{
     public static String returnValue(String getKey, String path)
     {
     	JSONParser parser = new JSONParser();
     	try 
     	{
            Object obj = parser.parse(new FileReader(path));
            JSONObject jsonObject = (JSONObject) obj;
            String key = (String) jsonObject.get(getKey);
            return key; 		
     	}
     	catch (FileNotFoundException e) 
     	{
            System.out.println("FileNotFoundException --------- " + e);
        }
        catch (IOException e) 
        {
            System.out.println("IOException ---------- " + e);
        }
        catch (ParseException e) 
        {
            System.out.println("ParseException -------  " + e);
        }
        catch (Exception e)
        {
        	System.out.println("AnotherException --------- " + e);
        }
    }
}
