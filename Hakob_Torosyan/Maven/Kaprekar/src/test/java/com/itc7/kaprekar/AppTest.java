package com.itc7.kaprekar;

import org.testng.annotations.*;
import org.testng.Assert;

public class AppTest{
    public void setUp(){
        System.out.println("Set up...");
    }

    @Test(groups={"fast"})
	public void myTest(){
 	       int[] arr={1,2};
 	       Assert.assertEquals(App.diffValues(arr),8,"Incorrect Value!");
	}
    @Test(groups={"fast"})
	public void myTest2(){
		int[] arr={1,2};
		Assert.assertEquals(App.diffValues(arr),9,"Correct Value!");	
	}
}
