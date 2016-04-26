package com.itc7;
import org.testng.annotations.*;
import org.testng.Assert;
import java.util.ArrayList;
import java.util.Arrays;

public class AppTest 
{    
    Kaprekar numObj = new Kaprekar();

    @Test (groups={Consts.GROUP_POSITIVE})
        public  void testMinNum() {
            Integer []array = {4, 5, 9};
            int result = numObj.minNum(new ArrayList<Integer>(Arrays.asList(array)));
            Assert.assertEquals(result, 459, Consts.ERROR_MESSAGE);
        }

    @Test(groups={Consts.GROUP_POSITIVE})
        public void testToDigits() {
            Integer []array = {4, 5, 6};
            ArrayList <Integer> result = new ArrayList<Integer>(Arrays.asList(array));
            Assert.assertTrue(result.equals(numObj.toDigits(564)), Consts.ERROR_MESSAGE_RESULT);
    }

    @Test (groups={Consts.GROUP_POSITIVE})
        public  void testMaxNum() {
            Integer []array = {4, 5, 9};
            int result = numObj.maxNum(new ArrayList<Integer>(Arrays.asList(array)));
            Assert.assertEquals(result, 954, Consts.ERROR_MESSAGE);
        }

    @Test (groups={Consts.GROUP_POSITIVE})
        public void testGetCount() {
            Assert.assertTrue(numObj.count(69885) == 5, Consts.ERROR_MESSAGE);
        }

    @Test (groups={Consts.GROUP_POSITIVE})
        public void testDiffCorrectCase() {
            int diff = numObj.diff(100);
            Assert.assertTrue(diff == 99, Consts.ERROR_MESSAGE);
        }

    @Test (groups={Consts.GROUP_NEGATIVE})
        public void testDiffMinusCase() {
            Assert.assertFalse(numObj.diff(1) < 0, Consts.ERROR_MESSAGE_NEGATIVE);
        }

    @Test (groups={Consts.GROUP_NEGATIVE})
        public void testGetCountMinusCase() {
            Assert.assertFalse(numObj.count(659) < 0 , Consts.ERROR_MESSAGE_NEGATIVE);
        }

    @Test (groups={Consts.GROUP_NEGATIVE})
         public  void testMaxNumNotMinusCase()  {
            Integer []array = {6, 7, 9};
            int result = numObj.maxNum(new ArrayList<Integer>(Arrays.asList(array)));
            Assert.assertFalse(result < 0, Consts.ERROR_MESSAGE_NEGATIVE);
        }  
 
    @Test(groups={Consts.GROUP_NEGATIVE})
        public void testToDigitsEmptyArr() {
            Assert.assertFalse(numObj.toDigits(564).size() <= 0, Consts.ERROR_MESSAGE_RESULT);
    }



    @Test(groups={Consts.GROUP_NEGATIVE})
        public void testToDigitsRetNull() {
            Assert.assertFalse(numObj.toDigits(564) == null, Consts.ERROR_MESSAGE_RESULT);
    }

    @Test (groups={Consts.GROUP_NEGATIVE})
        public void testGetCountMinusReturn() {
            Assert.assertFalse(numObj.count(0) == 0, Consts.ERROR_MESSAGE);
        }
   
}
