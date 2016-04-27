package com.itc7.kaprekar;
import java.util.*;

public class Constants{
	public List<Integer> goodNumbers;
    public List<Integer> firstZero;
    public List<Integer> allZero;
    public List<Integer> empty;
    public List<Integer> minusNumbers;
    public List<Integer> largeNumber;

    public String goodNumbersMsg="good number test, Return value is not correct!";
    public String firstZeroMsg="When first 0, not working :)";
    public String allZeroMsg="When all 0, not working :)";
    public String emptyMsg="When list is empty, not working :)";
    public String minusNumbersMsg="When minus, not working :)";
    public String largeNumberMsg="When large, not working :)";

    public int goodNumbersVal;
    public int firstZeroVal;
    public int allZeroVal;
    public int emptyVal;
    public int minusNumbersVal;
    public int largeNumberVal;

    public Constants()
    {
      goodNumbers=Arrays.asList(1, 2, 3, 4, 5);
	  goodNumbersVal=12345;

      firstZero=Arrays.asList(0, 2, 3, 4, 5);
      firstZeroVal=2345;

      allZero=Arrays.asList(0, 0, 0, 0, 0);
      allZeroVal=0;

      empty=new ArrayList<Integer>();
      emptyVal=0;

      minusNumbers=Arrays.asList(0, -1, 0, -7, 0);
      minusNumbersVal=-1;

      largeNumber=new ArrayList<Integer>();
      for(int i=0;i<100;++i) largeNumber.add(i);
      largeNumberVal=-1;
      
    }
}