package com.itc7.kaprekar;

import org.testng.annotations.*;
import org.testng.Assert;
import java.util.*;
import com.itc7.algorithm.Kaprekar;


public class AppTest 
{
    List<Integer> goodNumbers;
    List<Integer> firstZero;
    List<Integer> allZero;
    List<Integer> empty;
    List<Integer> minusNumbers;
    List<Integer> largeNumber;
    String goodNumbersMsg;
    String firstZeroMsg;
    String allZeroMsg;
    String emptyMsg;
    String minusNumbersMsg;
    String largeNumberMsg;
    

    @BeforeClass( alwaysRun=true)
    public void setUp()
    {
      goodNumbers=Arrays.asList(1, 2, 3, 4, 5);
      goodNumbersMsg="good number test, Return value is not correct!";

      firstZero=Arrays.asList(0, 2, 3, 4, 5);
      firstZeroMsg="When first 0, not working :)";

      allZero=Arrays.asList(0, 0, 0, 0, 0);
      allZeroMsg="When all 0, not working :)";

      empty=new ArrayList<Integer>();
      emptyMsg="When list is empty, not working :)";

      minusNumbers=Arrays.asList(0, -1, 0, -7, 0);
      minusNumbersMsg="When minus, not working :)";

      largeNumber=new ArrayList<Integer>();
      for(int i=0;i<100;++i) largeNumber.add(i);
      largeNumberMsg="When large, not working :)";
    }
    

    // test when good numbers
    @Test(groups={"positive"})
    public void goodNumbersTest()
    {
      Assert.assertEquals(Kaprekar.toInt(goodNumbers),12345,goodNumbersMsg);
    }

 
    // test when first number is 0
    @Test(groups={"positive"})
    public void firstZeroTest()
    {
      Assert.assertEquals(Kaprekar.toInt(firstZero),2345,firstZeroMsg);
    }

    // test when all numbers is 0
    @Test(groups={"positive"})
    public void allZeroTest()
    {
      Assert.assertEquals(Kaprekar.toInt(allZero),0,allZeroMsg);
    }

    // test when list is empty
    @Test(groups={"positive"})
    public void emptyTest()
    {
       Assert.assertEquals(Kaprekar.toInt(empty),0,emptyMsg);
    }

    // test when numbers are minus
    @Test(groups={"negative"})
    public void minusNumbersTest()
    {
      Assert.assertEquals(Kaprekar.toInt(minusNumbers),-1,minusNumbersMsg);
    }

    // test when large number
    @Test(groups={"negative"})
    public void largeNumberTest()
    {
      Assert.assertEquals(Kaprekar.toInt(largeNumber),-1,largeNumberMsg);
    }
}
