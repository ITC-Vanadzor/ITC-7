package com.itc7.kaprekar;
import org.testng.annotations.*;
import org.testng.Assert;
import java.util.ArrayList;
public class AppTest 
{    
    private Number numObj =  new Number(495);

    @Test (groups={"positive"})
    public  void testMinNum() {
            int result = numObj.minNum();
            Assert.assertEquals(result, 459, "*******minNum() FUNCTION IS INVALID*****");
        }

    @Test(groups={"positive"})
    public void testToDigits() {
        ArrayList <Integer> result =new ArrayList<Integer>();
        result.add(4);
        result.add(5);
        result.add(9);
        Assert.assertTrue(result.equals(numObj.toDigits()), "******toDigits() FUNCTION IS INVALID*****");
    }
    @Test (dependsOnMethods={"testToDigits"}, groups={"positive"})
    public  void testMaxNum() {
            int result = numObj.maxNum();
            Assert.assertEquals(result, 954, "*****maxNum() FUNCTION IS INVALID*****");
        }

    @Test (groups={"positive"})
    public void testGetCount() {
            Assert.assertTrue(numObj.count() == 3, "*****count() FUNCTION IS INVALID****");
        }

    @Test (groups={"positive"})
    public void testDiffCorrectCase() {
            int diff = numObj.diff();
            Assert.assertTrue(numObj.diff() == 495, "****diff() FUNCTION IS INVALID*****");
        }

    @Test (groups={"negative"})
    public void testDiffMinusCase() {
            int diff = numObj.diff();
            Assert.assertNotEquals(numObj.diff() == -5 , "****diff() FUNCTION IS INVALID*****");
        }


    @Test (groups={"negative"})
    public void testGetCountMinusCase() {
            Assert.assertFalse(numObj.count() == -1, "*****count() FUNCTION IS INVALID****");
        }

    @Test (groups={"negative"})
    public  void testMaxNumNotIntegerCase()  {
            int result = numObj.maxNum();
         // TODO  Assert.assertNotEquals(result, "hi", "*****maxNum() FUNCTION IS INVALID*****");
        }  
}
