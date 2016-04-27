package com.itc7;

import org.testng.Assert;
import org.testng.annotations.*;
import java.util.ArrayList;
import java.util.Collections;

public class KaprekarTest 
{
    public Number testNumberObj = new Number();
    public ArrayList<Integer> testArray = new ArrayList<Integer>();
    
    @Parameters({"inputData"}) 
    @BeforeClass(alwaysRun=true)
    @Test
    public void setUp(int Data) 
    {
    	testNumberObj.setNumber(Data);
    	Assert.assertEquals(testNumberObj.number, Data, "Set Number ------------- false");
    }
    
    @Test
    public void forNumber() 
    {
        Assert.assertTrue(testNumberObj.number > 0, "Number is negative--------------- false");
    }


    @Test(groups = "negative")
    public void negativeTestToDigits()
    {
        Assert.assertEquals(testNumberObj.toDigits(), testArray, "negativeTestToDigits is -------------- false");
    } 
    

    @Test(groups = "positive")
    public void positiveTestToDigits()
    {
        testNumberObj.digitsArray.clear();
        testArray.add(0);
        testArray.add(0);
        testArray.add(1);
        Assert.assertEquals(testNumberObj.toDigits(), testArray, "positiveTestToDigits is ------------- false");
    } 


    @Test(groups = "positive")
    public void positiveTestToDigits2()
    {
        boolean x =true;
        for (Integer element: testNumberObj.digitsArray) 
        {
            if (element >9 || element < 0) 
            {
                x=false;
            }
        }
        Assert.assertTrue(x, "positiveTestToDigits2 is ---------------- false");
    } 


    @Parameters({"sizeInputData"})
    @Test(groups = {"positive"})
    public void testOneDigit(int sizeArray) 
    {
        Assert.assertEquals(testNumberObj.digitsArray.size(), sizeArray, "count of elements in array ------------------- true");
        
    }
    
    @Test(groups = {"positive"})
    public void testInputArray(int sizeArray) 
    {
        Assert.assertEquals(testNumberObj.digitsArray.size(), sizeArray, "count of elements in array -------------------- true");
        
    }
    @Parameters({"minNumber"})
    @Test(groups = {"positive"})
    public void testMinNumPositive(int minNum) 
    {
        Assert.assertEquals(testNumberObj.minNum(testNumberObj.digitsArray), minNum, "Min number ---------------- true");
        
    }

    @Test(groups = {"negative"})
    public void testMinNumNegative() 
    {
        Assert.assertEquals(testNumberObj.minNum(testNumberObj.digitsArray), 4586, "Min number ---------------------- false");
        
    }
    
    @Parameters({"maxNumber"})
    @Test(groups = {"positive"})
    public void testMaxNumPositive(int maxNum) 
    {
        Assert.assertEquals(testNumberObj.maxNum(testNumberObj.digitsArray), maxNum, "Max number ---------------------- true");
        
    }

    @Test(groups = {"negative"})
    public void testMaxNumNegative() 
    {
        Assert.assertEquals(testNumberObj.maxNum(testNumberObj.digitsArray), 5689, "Max number --------------------- false");
        
    }
    
    @Parameters({"maxNumber", "minNumber", "sizeInputData", "resultData"})
    @Test(groups = {"positive"})
    public void testOneDigit(int maxNum, int minNum, int arraySize, String resultData) 
    {
        int tmpDiff = maxNum - minNum;
        Assert.assertEquals(testNumberObj.diff(maxNum, minNum, arraySize), resultData, "Diff  ---------------------- true");
        
    }
}
