package com.itc7;

import java.util.Scanner;
import com.itc7.util.*;

public class App {

    public static void main(String[] args) {
        System.out.println(args[0]);
        System.out.println(args[1]);
        JsonExample.writeJson();
        JsonExample.readJson(args[0],args[1]);
    }

}
