package com.itc7.kaprekar;

import com.itc7.kaprekar.Number;
import org.testng.Assert;
import org.testng.annotations.*;

public class NumberTest {
    private Number numberObj;

    @BeforeTest(groups = {"positive"})
    public void setUp() {
        numberObj = new Number(758);
        System.out.println("-----function setUp-----");
    }
    
    @Test(groups = {"positive"})
    public void minTestPos() {
        System.out.println("-----Test min positive-----");
        Assert.assertEquals(578,numberObj.min());
    }

    @Test(groups = {"positive"})
    public void maxTestPos() {
        System.out.println("-----Test max positive-----");
        Assert.assertEquals(875,numberObj.max());
    }

    @Test(groups = {"negative"})
    public void minTestNeg() {
        System.out.println("-----Test min negative-----");
        Assert.assertEquals("asd",numberObj.min());
    }

    @Test(groups = {"negative"})
    public void maxTestNeg() {
        System.out.println("-----Test max negative-----");
        Assert.assertEquals("dfs",numberObj.max());
    }

}
