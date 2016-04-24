package com.itc7.utils;
import java.io.FileReader;
import java.util.Iterator;
 
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
public class UtilsApp 
{
    public static void utilsPrint(String key,String filePath) 
    {
        JSONParser parser = new JSONParser();
 
        try 
        {
            Object obj = parser.parse(new FileReader(filePath));
            if(key.equals("name") || key.equals("surname"))
            {
                JSONObject jsonObject = (JSONObject) obj;
                String value = (String) jsonObject.get(key);
                System.out.println(key+" : "+value);
            }
          
            //****error on time compile*****generics are not supported in -source 1.3******
           
           /* else if(key.equals("messages"))
            {
                   JsONArray array = (JSONArray) jsonObject.get(key);
                   Iterator<String> iterator = array.iterator();
                   while (iterator.hasNext()) 
                    {
                        System.out.println(iterator.next());
                    } 
            }
            */
        }
        catch (Exception e) 
        {
            e.printStackTrace();
        }
           }
            


}




