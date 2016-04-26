package com.itc7.kaprekar;
import org.testng.annotations.*;
import org.testng.Assert;
import java.util.*;
import  com.itc7.constants.Constants;
public class AppTest 
{    
     public  Number obj; 
     public ArrayList<Integer> intArray;
    
    @BeforeClass (groups = {"positive"})
    public void setUp()
    {
       intArray = new ArrayList<Integer>(Arrays.asList(1,0,0));
       obj =new Number();
    }

    @Test (groups = {Constants.pos})
    public  void testMinNum()
    {
	    int result = obj.minNum(intArray);
        Assert.assertEquals(result, 1, Constants.minNumMessage);
    }
    @Test (groups = {Constants.pos})
    public  void testMinNumString()
    {
	    int result = obj.minNum(intArray);
        Assert.assertEquals(result, 1, Constants.minNumMessage);
    }
    @Test ( groups = {Constants.pos})
    public void testMaxNum()
    {
        int result=obj.maxNum(intArray);
        Assert.assertEquals(result, 100, Constants.maxNumMessage);
    }   
 
    @Test (groups = {Constants.neg})
    public void testMaxNumNeg()
    {
        int result=obj.maxNum(intArray);
        Assert.assertNotEquals(result, 1, Constants.maxNumMessage);
    }

    @Test (groups = {Constants.neg})
    public void testToDigits()
    {
	    
   	    Assert.assertTrue(intArray.equals(obj.toDigits(100)),Constants.toDigitsMessage);
    }

    @Test (groups = {Constants.pos})
    public void testDiff()
    {
        int result=obj.Diff(100,1);
        Assert.assertTrue(result==99, Constants.diffMessage);
    }

    @Test (groups = {Constants.pos})
    public void testCount() 
    {
        int result=obj.count(intArray);
    	Assert.assertEquals(result,3, Constants.countMessage);
    }
    
    @Parameters("count")
    @Test (groups = {Constants.neg})
    public void testCountNeg(int param)
    {
        int result=obj.count(intArray);
    	Assert.assertNotEquals(result,param, Constants.countMessage);
    }


}
