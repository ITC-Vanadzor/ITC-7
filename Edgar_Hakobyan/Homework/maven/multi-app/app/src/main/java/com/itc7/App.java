package com.itc7;

import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Iterator;
import java.io.IOException;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.json.simple.parser.ParseException;

public class App {

    public static void main(String[] args) {
        System.out.println("---------" + args[0]);
        System.out.println("---------" + args[1]);
        
        JSONParser parser = new JSONParser();

        try {
            Object obj = parser.parse(new FileReader(args[0]));
            JSONObject jsonObject = (JSONObject) obj;

            System.out.println(jsonObject.get(args[1]));

        }catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ParseException e) {
            e.printStackTrace();
        }
    }

}
