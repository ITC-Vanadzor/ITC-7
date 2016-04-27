package com.itc7.kaprekar;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;

import org.testng.annotations.*;
import org.testng.AssertJUnit;

/**
 * Unit test for simple App.
 */
public class AppTest 
    extends TestCase
{
    
	@BeforeMethod
	public void before() {
		System.out.println("Text before every test.....");
	}
	
	@DataProvider(name = "difValuesProvider")
	public int[][] simpleDataProvider() {
		return new int[][] {
			{1,2,4,6},
			{3,4,5},
			{5,9},
			{1,2}
		};				
	}

	@Test(groups = "myGroup", dataProvider = "difValuesProvider")
	public void difValuesTest1(int[] arr) {
		System.out.println("Test difValuesTest1 has started...");
		int result = App.diffValues(arr); 
		Assert.assertTrue("Function does not correct", result == 9);
		System.out.println("Test difValuesTest1 has ended...");
	} 

    	@Test(priority = 5, groups = "myGroup")
    	public void difValuesTest2() {
		System.out.println("Test difValuesTest2 has started...");
		int[] arr = {1,2};
		int result = App.diffValues(arr);
		assertFalse("Function is correct", result == 9);
		System.out.println("Test difValuesTest2 has ended...");
	}
	
	@Test(enabled = false)
	public void difValuesTest3(enabled = false) {
		System.out.println("Test difValuesTest3 has started...");
		int[] arr = {1,2};
		int result = App.diffValues(arr);
		assertEquals(result, 9, "Function is incorrect");
        	System.out.println("Test difValuesTest3 has ended...");
	}
      
	@Test(dependsOnMethods = "difValuesTest2")
	public void difValuesTest4() {
	        System.out.println("Test difValuesTest4 has started...");
		int[] arr = {1,2};
                int result = App.diffValues(arr);
                assertNotEquals(result, 9, "Function is correct");
                System.out.println("Test difValuesTest4 has ended...");
	}
	
	@AfterMethod
	public void after() {
	System.out.println("Text after every test...");
	}
		 
}
