package com.itc7.kaprekar;

import org.testng.annotations.*;
import org.testng.Assert;
import java.util.*;
import com.itc7.algorithm.Kaprekar;

/**
 * Unit test for simple App.
 */
public class AppTest 
{
    @BeforeClass
    public void setUp(  )
    {
        System.out.println("Set up....start!");

    }

    // this test for ......
    @Test(groups={"negative"})
    public void negativeTest()
    {
        System.out.println("Negative test....start!");
        ArrayList<Integer> tempList =new ArrayList<Integer>();
       tempList.add(1);
       tempList.add(2);
       tempList.add(0);
       tempList.add(4);
       // String expectedErrorMessage = "One of input value is invalid";
        Assert.assertEquals(Kaprekar.toInt(tempList),1204,"Incorrect input value!");
    }

    @Test(groups={"positive"})
    public void positiveTest()
    {
        System.out.println("Positive test....start!");
    }

    
}
