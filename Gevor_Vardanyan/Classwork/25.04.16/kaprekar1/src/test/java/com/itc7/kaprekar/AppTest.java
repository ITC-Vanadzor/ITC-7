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

    
    @Test(groups={"fast"})
    public void fastTest()
    {
        System.out.println("Fast test....start!");
        ArrayList<Integer> tempList =new ArrayList<Integer>();
        tempList.add(1);
        tempList.add(2);
        tempList.add(0);
        tempList.add(4);

        Assert.assertEquals(Kaprekar.toInt(tempList),1208,"Incorrect return value!");
    }

    @Test(groups={"slow"})
    public void slowTest()
    {
        System.out.println("Slow test....start!");
    }

    
}
