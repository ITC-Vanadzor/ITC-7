package com.itc7;

import org.testng.Assert;
import org.testng.annotations.*;
import com.itc7.*;
/**
 * Unit test for simple App.
 */
public class AppTest 
{
    private  Number numberObj;
    @BeforeClass(alwaysRun= true)
    public void setUp(){
	numberObj = new Number();	
    }
    //positive resaults
    @Test(groups = {"minFunc","positive"})
    public void minNumTest(){
	Assert.assertEquals(578,numberObj.minNum(),"It's OK");
    }
    @Test(groups = {"maxFunc","positive"})
    public void maxNumTest() {
        Assert.assertEquals(875,numberObj.maxNum(),"It's OK");
    }
    //negative resaults
    @Test(groups = {"minFunc","negative"})
    public void minNumStrTest(){
        Assert.assertEquals("stringType",numberObj.minNum(),"It's faild");
    }
    @Test(groups = {"minFunc","negative"})
    public void minNumFailTest(){
        Assert.assertEquals(99,numberObj.minNum(),"It's faild");
    }
    @Test(groups = {"maxFunc","negative"})
    public void maxNumStrTest() {
        Assert.assertEquals("stringType",numberObj.maxNum(),"It's faild");
    }
    @Test(groups = {"maxFunc","negative"})
    public void maxNumFailTest() {
        Assert.assertEquals(22,numberObj.maxNum(),"It's faild");
    }
    @Test(dependsOnGroups = {"minFunc"})
    public void DiffTest(){
	Assert.assertEquals("297",numberObj.Diff());
    }
}
