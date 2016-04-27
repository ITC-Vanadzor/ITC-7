package com.itc7;

import org.testng.Assert;
import org.testng.annotations.*;
import java.util.ArrayList;
import java.util.Collections;
public class KaprekarTest {
    public Number testNumberObj = new Number();
    
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
	Assert.assertEquals(testNumberObj.number, Data, "Set Number -- true");
    }
    
   @Test
   public void 
    
    
    
    
    
    
    
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
