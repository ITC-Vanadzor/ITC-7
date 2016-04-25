package com.itc7.utils;

/**
 * Hello world!
 *
 */

import java.io.FileWriter;
import java.io.FileReader;
import java.util.Iterator;
 
 import org.json.simple.JSONArray;
 import org.json.simple.JSONObject;
 import org.json.simple.parser.JSONParser;
public class AppUtils 
{
    public static void print()
    {
        System.out.println( "Hello from Utils!" );
    }
    public static void writeJSON () {
	JSONObject obj = new JSONObject();
	obj.put("Program", "maven");
	obj.put("Author", "Araks");

	/*JSONArray author = new JSONArray();
	company.add("Name: Araks");
	company.add("Surname: Hambaryan");
	obj.put("Author", author);*/

	try (FileWriter file = new FileWriter("/home/araks/Documents/maven/utils/src/main/resources/data.json")) {
	    file.write(obj.toJSONString());
	    System.out.println("Successfully Copied JSON Object to File...");
	    System.out.println("\nJSON Object: " + obj);
	}
	
    }
    public static void readJSON (){
	try{
	    String filePath = "/home/araks/Documents/maven/utils/src/main/resources/data.json";
	    JSONParser parser = new JSONParser();
	    Object obj = parser.parse(new FileReader(filePath));

	JSONObject jsonObject = (JSONObject) obj;

	String name = (String) jsonObject.get("program");
	System.out.println(name);
	}catch (Exception e) {
	    System.out.println("exp1");
	}
	//long age = (Long) jsonObject.get("age");
	//System.out.println(age);

	// loop array
	//JSONArray msg = (JSONArray) jsonObject.get("messages");
	/*Iterator<String> iterator = msg.iterator();
	while (iterator.hasNext()) {
	    System.out.println(iterator.next());
	}*/
    }
}
