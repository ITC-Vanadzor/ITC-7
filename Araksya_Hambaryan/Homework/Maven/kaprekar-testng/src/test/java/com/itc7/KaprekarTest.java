package com.itc7;

import org.testng.Assert;
import org.testng.annotations.*;
import java.util.ArrayList;
import java.util.Collections;
public class KaprekarTest {
    public Number testNumberObj = new Number();
    public ArrayList<Integer> testArray = new ArrayList<Integer>();
    
    /*Parameters({"inputData"})
    Test(expectedExceptions=ParseFormatException.class)
    public void testForInputData() throws ParseFormatException {
	testNumber.SetNumber("aaaaa")
    }*/
    
    @Parameters({"inputData"}) 
    @BeforeClass(alwaysRun=true)
    @Test
    public void setUp(int Data) {
    	testNumberObj.setNumber(Data);
    	Assert.assertEquals(testNumberObj.number, Data, "Set Number -- false");
    }
    
    @Test
    public void forNumber() {
        Assert.assertTrue(testNumberObj.number > 0, "Number is negative-- false");
    }


    @Test(groups = "negative")
    public void negativeTestToDigits(){
        Assert.assertEquals(testNumberObj.toDigits(), testArray, "negativeTestToDigits is -- false");
    } 
    

    @Test(groups = "positive")
    public void positiveTestToDigits(){
        testNumberObj.digitsArray.clear();
        testArray.add(0);
        testArray.add(0);
        testArray.add(1);
        Assert.assertEquals(testNumberObj.toDigits(), testArray, "positiveTestToDigits is -- false");
    } 


    @Test(groups = "positive")
    public void positiveTestToDigits2(){
        boolean x =true;
        for (Integer element: testNumberObj.digitsArray) {
            if (element >9 || element < 0) {
                x=false;
            }
        }
        Assert.assertTrue(x, "positiveTestToDigits2 is -- false");
    } 


    @Parameters({"sizeInputData"})
    @Test(groups = {"positive"})
    public void testOneDigit(int sizeArray) {
        Assert.assertEquals(testNumberObj.digitsArray.size(), sizeArray, "count of elements in array -- true");
        
    }
    
    @Test(groups = {"positive"})
    public void testInputArray(int sizeArray) {
        Assert.assertEquals(testNumberObj.digitsArray.size(), sizeArray, "count of elements in array -- true");
        
    }
    @Parameters({"minNumber"})
    @Test(groups = {"positive"})
    public void testOneDigit(int minNum) {
        Assert.assertEquals(testNumberObj.minNum(testNumberObj.digitsArray), minNum, "Min number -- true");
        
    }
    
    @Parameters({"maxNumber"})
    @Test(groups = {"positive"})
    public void testOneDigit(int maxNum) {
        Assert.assertEquals(testNumberObj.maxNum(testNumberObj.digitsArray), maxNum, "Max number -- true");
        
    }
    
    @Parameters({"maxNumber", "minNumber", "sizeInputData", "resultData"})
    @Test(groups = {"positive"})
    public void testOneDigit(int maxNum, int minNum, int arraySize, String resultData) {
        int tmpDiff = maxNum - minNum;
        Assert.assertEquals(testNumberObj.Diff(maxNum, minNum, arraySize), resultData, "Diff  -- true");
        
    }
    
    //public ArrayList<Integer> testArray;
    
    /*@BeforeClass(alwaysRun = true)
    public void setUp() {
        testNumber = new Number(816); 
        testNumber.toDigits();
    }

     @Test(groups = {"toDigits", "positive"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.array.get(0), 8, "Adding digit -- true");
        
    }
    
    @Test(groups = {"toDigits", "positive"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.array.get(1), 1, "Adding digit -- true");
        
    }
    
    @Test(groups = {"toDigits", "negative"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.array.get(2), 8, "Adding digit -- false");
        
    }
    
    @Test(groups = {"toDigits", "positive"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.array.size(), 3, "Adding all digits -- true");
        
    }
    
    @Test(groups = {"minNum", "positive"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.minNum(), 168, "Min number -- true");
        
    }
    
    @Test(groups = {"maxNum", "positive"})
    public void testOneDigit() {
        Assert.assertEquals(testNumber.maxNum(), 861, "Max number -- true");
        
    }
    
    @Test(groups = {"Diff", "positive"})
    public void testOneDigit() {
        int tmpDiff = 861-168;
        Assert.assertEquals(testNumber.Diff(), tmpDiff, "Diff  -- true");
        
    }
    @Test(groups = {"negativ"}, expected=ArrayStoreException.class)
    public void testForToDigitt() {
        array.add('d');
        
    }*/
}
