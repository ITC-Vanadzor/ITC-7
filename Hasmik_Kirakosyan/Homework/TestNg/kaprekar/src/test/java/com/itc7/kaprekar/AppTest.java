package com.itc7.kaprekar;
import org.testng.annotations.*;
import org.testng.Assert;
import java.util.ArrayList;
public class AppTest 
{    
   Number numObj =  new Number(495);
   @Test (dependsOnMethods={"testToDigits"})
  // positive test	
   public  void testMinNum()
   {
	int result = numObj.minNum();
        Assert.assertEquals(result, 459, "minNum() FUNCTION IS INVALID");
   }

   @Test
   public void testToDigits()
   {
	ArrayList <Integer> result =new ArrayList<Integer>();
	result.add(4);
	result.add(5);
	result.add(9);
   	Assert.assertTrue(result.equals(numObj.toDigits()), "toDigits() FUNCTION IS INVALID");
   }
}
