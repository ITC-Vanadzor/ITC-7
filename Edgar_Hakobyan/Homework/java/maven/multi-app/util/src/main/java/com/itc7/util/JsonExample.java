package com.itc7.util;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Iterator;
import java.io.IOException;
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

public class JsonExample {

    public static void writeJson() {
        JSONObject obj = new JSONObject();

        obj.put("name", "edgar");
        obj.put("surname","hakobyan");
        obj.put("age", new Integer(21));

        JSONArray list = new JSONArray();
        list.add("physics");
        list.add("mathematics");
        list.add("Informatics");
    
        obj.put("subject", list);

        try {
            FileWriter file = new FileWriter("test.json");
            file.write(obj.toJSONString());
            file.flush();
            file.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        System.out.println(obj);
    }

    public static void readJson(String key, String path) {

        JSONParser parser = new JSONParser();

        try {
            Object obj = parser.parse(new FileReader(path));
            JSONObject jsonObject = (JSONObject) obj;
        
            System.out.println(jsonObject.get(key));

            //Object name = jsonObject.get(key);
            //System.out.println(name);

            //for(JsonElement el:

            //long age = (Long) jsonObject.get("age");
            //System.out.println(age);

            //JSONArray sub = (JSONArray) jsonObject.get(key);
            //Iterator<String> iterator = sub.iterator();
            //while (iterator.hasNext()) {
            //    System.out.println(iterator.next());
            //}

        }catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ParseException e) {
            e.printStackTrace();
        }
    }
}
