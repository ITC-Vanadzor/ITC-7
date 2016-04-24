package com.itc7;

import java.util.Scanner;
import com.itc7.util.*;

public class App {

    public static void main(String[] args) {
        
        System.out.println("please enter path to json or 1 to create new json");
        Scanner in = new Scanner(System.in);
        String path = in.nextLine();

        System.out.println("please enter key");
        String key = in.nextLine();

        if( path.charAt(0) == '1' ) {
            System.out.println("----------------");
            JsonExample.writeJson();
            JsonExample.readJson(key,"test.json");
        } else { 
            System.out.println("----------------");
            JsonExample.readJson(key,path);
        }

    }

}
