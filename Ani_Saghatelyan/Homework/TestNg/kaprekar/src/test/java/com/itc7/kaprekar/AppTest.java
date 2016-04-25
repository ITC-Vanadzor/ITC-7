package com.itc7.kaprekar;
import org.testng.annotations.*;
import org.testng.Assert;
import java.util.ArrayList;
public class AppTest 
{    
   Number numObj =  new Number(495);
    
    @BeforeClass (groups = {"negative"})
    public void testConstructorNeg()
    {
        Number obj=new Number((-5));
        Assert.assertFalse(obj.number>0,"THE ARGUMENT OF CONSTRUCTOR IS LESS OR EQUAL THEN 0!!!");
    }

    @BeforeClass  (groups = {"positive"})
    public void testConstructorPos()
    {
        Number obj=new Number((10));
        Assert.assertTrue(obj.number>0,"THE ARGUMENT OF CONSTRUCTOR IS LESS OR EQUAL THEN 0!!!");
    }
    @Test (dependsOnMethods={"testToDigits"}, groups = {"positive"})
    public  void testMinNum()
    {
	    int result = numObj.minNum();
        Assert.assertEquals(result, 459, "minNum() FUNCTION IS INVALID");
    }

    @Test (dependsOnMethods={"testToDigits"}  , groups = {"positive"})
    public void testMaxNum()
    {
        int result=numObj.maxNum();
        Assert.assertEquals(result, 954, "maxNum() FUNCTION IS INVALID");
    }
    
    @Test (groups = {"negative"})
    public void testMaxNumNeg()
    {
        int result=numObj.maxNum();
        Assert.assertNotEquals(result, 459, "maxNum() FUNCTION IS INVALID negative");
    }

    @BeforeMethod
    public void testToDigits()
    {
	    ArrayList <Integer> result =new ArrayList<Integer>();
    	result.add(4);
    	result.add(5);
    	result.add(9);
   	    Assert.assertTrue(result.equals(numObj.toDigits()), "toDigits() FUNCTION IS INVALID");
    }

    @Test (dependsOnMethods={"testMinNum"}, groups = {"positive"})
    public void testDiff()
    {
         int result=numObj.Diff();
        Assert.assertTrue(result==495, "DIFF() FUNCTION IS CORRECT");
    }

    @Test (dependsOnMethods={"testToDigits"}, groups = {"positive"})
    public void testCount() 
    {
        int result=numObj.count();
    	Assert.assertEquals(result,3, "count() FUNCTION IS INVALID");
    }
    
    @Parameters("count")
    @Test (dependsOnMethods={"testToDigits"}, groups = {"negative"})
    public void testCountNeg(int param)
    {
        int result=numObj.count();
    	Assert.assertNotEquals(result,param, "count() FUNCTION IS INVALID");
    }


}
