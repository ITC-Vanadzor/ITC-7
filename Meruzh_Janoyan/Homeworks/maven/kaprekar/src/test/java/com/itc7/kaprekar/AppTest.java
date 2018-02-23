package com.itc7.kaprekar;

import org.testng.annotations.*;
import org.testng.Assert;
import com.itc7.algorithm.Kaprekar;
import com.itc7.kaprekar.Constants;


public class AppTest 
{
    Constants obj;
    

    @BeforeClass( alwaysRun=true)
    public void setUp()
    {
      obj=new Constants();
      
    }
    

    // test when good numbers
    @Test(groups={"positive"})
    public void goodNumbersTest()
    {
      Assert.assertEquals(Kaprekar.toInt(obj.goodNumbers),obj.goodNumbersVal,obj.goodNumbersMsg);
    }

 
    // test when first number is 0
    @Test(groups={"positive"})
    public void firstZeroTest()
    {
      Assert.assertEquals(Kaprekar.toInt(obj.firstZero),obj.firstZeroVal,obj.firstZeroMsg);
    }

    // test when all numbers is 0
    @Test(groups={"positive"})
    public void allZeroTest()
    {
      Assert.assertEquals(Kaprekar.toInt(obj.allZero),obj.allZeroVal,obj.allZeroMsg);
    }

    // test when list is empty
    @Test(groups={"positive"})
    public void emptyTest()
    {
       Assert.assertEquals(Kaprekar.toInt(obj.empty),obj.emptyVal,obj.emptyMsg);
    }

    // test when numbers are minus
    @Test(groups={"negative"})
    public void minusNumbersTest()
    {
      Assert.assertEquals(Kaprekar.toInt(obj.minusNumbers),obj.minusNumbersVal,obj.minusNumbersMsg);
    }

    // test when large number
    @Test(groups={"negative"})
    public void largeNumberTest()
    {
      Assert.assertEquals(Kaprekar.toInt(obj.largeNumber),obj.largeNumberVal,obj.largeNumberMsg);
    }
}
