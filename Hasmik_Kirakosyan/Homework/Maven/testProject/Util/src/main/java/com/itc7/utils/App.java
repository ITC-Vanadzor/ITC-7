package com.itc7.utils;
import java.io.FileReader;
import java.util.Iterator;

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;

public class App 
{
    public static String getKeyValue(String key, String filePath) {
        JSONParser parser = new JSONParser();

        try {

            Object obj = parser.parse(new FileReader(filePath));
            JSONObject jsonObject = (JSONObject) obj;

            String value = (String) jsonObject.get(key);
            return value;

        }
        catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

}

