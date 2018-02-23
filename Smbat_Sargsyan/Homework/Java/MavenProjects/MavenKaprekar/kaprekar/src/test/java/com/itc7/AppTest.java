package com.itc7;

import org.testng.Assert;
import org.testng.annotations.*;
import org.testng.annotations.DataProvider;
import com.itc7.Number;
import static com.itc7.Constants;
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
    @DataProvider(name = "varTypes")
    public static Object [][] initializeVariables(){
        return new Object [][] {785,-18,"gggg",5.05,-8.8};
    }
    @BeforeTest(dataProvider = "varTypes")
    public void TestInit(Object var){
        Assert.assertEquals(var,numberObj.init(var)); 
    }
    //positive resaults
    @Test(groups = {"minFunc","positive"})
    public void minNumTest(){
	Assert.assertEquals(578,numberObj.minNum(785),OK);
    }
    @Test(groups = {"maxFunc","positive"})
    public void maxNumTest() {
        Assert.assertEquals(875,numberObj.maxNum(785),OK);
    }
    @Test(groups = {"kaprekar","positive"})
    public void DiffTest(){
        Assert.assertEquals("297",numberObj.Diff(785,numberObj.maxNum(785),numberObj.minNum(785)),OK);
    }
    @Test(groups = {"init","positive"})
    public void InitTest() {
        Assert.assertEquals(875,numberObj.init(875),OK);
    }
    //negative resaults
    @Test(groups = {"minFunc","negative"})
    public void minNumStrTest(){
        Assert.assertEquals("stringType",numberObj.minNum(785),FAILD);
    }
    @Test(groups = {"minFunc","negative"})
    public void minNumFailTest(){
        Assert.assertEquals(99,numberObj.minNum(0),FAILD);
    }
    @Test(groups = {"maxFunc","negative"})
    public void maxNumStrTest() {
        Assert.assertEquals("stringType",numberObj.maxNum(785),FAILD);
    }
    @Test(groups = {"maxFunc","negative"})
    public void maxNumFailTest() {
        Assert.assertEquals(22,numberObj.maxNum(888),FAILD);
    }
    @Test(groups = {"kaprekar","negative"})
    public void DiffFailTest(){
        Assert.assertEquals("000",numberObj.Diff(785,numberObj.maxNum(785),numberObj.minNum(785)));
    }
    @Test(groups = {"init","negative"})
    public void InitStrTest() {
        Assert.assertEquals("fff",numberObj.init(875),FAILD);
    }
    @Test(groups = {"init","negative"})
    public void InitFailTest() {
        Assert.assertEquals(52222,numberObj.init(875),FAILD);
    }
    @Test(groups = {"init","negative"})
    public void InitNegativeNumberTest() {
        Assert.assertEquals(-875,numberObj.init(875),FAILD);
    }



}
