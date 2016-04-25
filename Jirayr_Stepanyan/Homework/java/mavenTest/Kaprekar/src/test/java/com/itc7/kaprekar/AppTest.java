package com.itc7.kaprekar;

import org.testng.annotations.*;
import org.testng.Assert;

public class AppTest
{
	@BeforeSuite
	public void beforeSuite()
	{
		System.out.println("-------beforeSuite has been started-------");
	}

	@BeforeClass
    public void beforeClass()
    {
        System.out.println("-------beforeClass has been started-------");
    }

    @BeforeTest
    public void beforeTest()
    {
    	System.out.println("-------beforeTest has been started-------");
    }

    @Test(groups={"negative"})
    public void negativeDiffValues()
    {
    	System.out.println("-------negativeDiffValues test has been started--------");
        int[] arr={1,2};
        Assert.assertEquals(App.diffValues(arr), 8, "-------Incorrect Value!------");
    }

    @Test(groups={"negative"})
    public void negativeSub()
    {
    	System.out.println("-------negativeSub test has been started--------");
        Assert.assertEquals(App.sub(5, 3), 3, "-------Incorrect Value!------");
    }

    @Test(groups={"positive"})
    public void positiveSub()
    {
    	System.out.println("-------positiveSub test has been started--------");
        Assert.assertEquals(App.sub(5, 3), 2);
    }

    @Test(dependsOnMethods = {"positiveSub"})
    public void dependsOnSub()
    {
    	System.out.println("-------dependsOnSub test has been started--------");
    }

    @Test(alwaysRun = true)
    public void alwaysRun()
    {
    	System.out.println("-------alwaysRun test has been started--------");
        Assert.assertEquals(App.sum(5, 3), 9, "-------Incorrect Value!------");
    }

    @Test(groups={"positive"})
    public void positiveDiffValues()
    {
    	System.out.println("-------positiveDiffValues test has been started--------");
        int[] arr={1,2};
        Assert.assertEquals(App.diffValues(arr), 9);
    }

    @AfterTest
    public void afterTest()
    {
    	System.out.println("-------afterTest has been started-------");
    }

    @AfterClass
    public void afterClass()
    {
        System.out.println("-------afterClass has been started-------");
    }

    @AfterSuite
	public void afterSuite()
	{
		System.out.println("-------afterSuite has been started-------");
	}
}