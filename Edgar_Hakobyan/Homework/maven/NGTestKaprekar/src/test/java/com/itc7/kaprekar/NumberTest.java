package com.itc7.kaprekar;

import com.itc7.kaprekar.Number;
import com.itc7.kaprekar.Constants;
import org.testng.Assert;
import org.testng.annotations.*;
import java.util.Vector;

public class NumberTest {

    @Test(groups = {Constants.Positive})
    public void minNumberInVectorTestPos() {
        Vector<Integer> vector = new Vector<Integer>(5);
        vector.add(4);
        vector.add(8);
        vector.add(7);
        vector.add(3);
        vector.add(9);
        System.out.println(vector);
        System.out.println("-----Test min positive-----");
        Assert.assertEquals(34789,Number.minNumberInVector(vector),"function is not return true value");
    }

    @Test(groups = {Constants.Positive})
    public void maxNumberInVectorTestPos() {
        Vector<Integer> vector = new Vector<Integer>(5);
        vector.add(4);
        vector.add(8);
        vector.add(7);
        vector.add(3);
        vector.add(9);
        System.out.println(vector);
        System.out.println("-----Test max positive-----");
        Assert.assertEquals(98743,Number.maxNumberInVector(vector),"function is not return true value");
    }
    
    @Test(groups = {Constants.Positive})
    public void parseNumberToVectorTestPos() {
        Vector<Integer> vector = new Vector<Integer>(5);
        vector.add(4);
        vector.add(8);
        vector.add(7);
        vector.add(3);
        vector.add(9);
        System.out.println("-----Test parse number to vector positive-----");
        Assert.assertEquals(vector,Number.parseNumberToVector(93784),"function is not return true value");
    }

    @Test(groups = {Constants.Positive})
    public void diffTestPos() {
        System.out.println("-----Test diff positive-----");
        Assert.assertEquals(25,Number.diff(45,20),"function is not return true value");
    }

    @Test(groups = {Constants.Negative})
    public void minNumberInVectorTestNeg() {
        Vector<Integer> vector = new Vector<Integer>(5);
        vector.add(4);
        vector.add(8);
        vector.add(7);
        vector.add(3);
        vector.add(9);
        System.out.println(vector);
        System.out.println("-----Test min negative-----");
        Assert.assertEquals(34567,Number.minNumberInVector(vector),"function is not return true value");
    }

    @Test(groups = {Constants.Negative})
    public void maxNumberInVectorTestNeg() {
        Vector<Integer> vector = new Vector<Integer>(5);
        vector.add(4);
        vector.add(8);
        vector.add(7);
        vector.add(3);
        vector.add(9);
        System.out.println(vector);
        System.out.println("-----Test max negative-----");
        Assert.assertEquals(98778,Number.maxNumberInVector(vector),"function is not return true value");
    }

}
