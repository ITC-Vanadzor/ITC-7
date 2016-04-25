package com.itc7.app;

import java.util.Date;
import org.apache.commons.lang.time.DateFormatUtils;


public class App 
{
     public static String getToday() {
                String today = DateFormatUtils.format(new Date(), "dd-MMM-yyyy");
                return today;
        }
}
