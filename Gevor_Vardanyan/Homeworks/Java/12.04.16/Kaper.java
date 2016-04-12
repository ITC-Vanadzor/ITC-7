import java.util.*;
import java.lang.*;
import java.io.*;

class Kaper
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader in = new BufferedReader(
	    new InputStreamReader(System.in));
	    
		System.out.print("Input First Number: ");
		int first = Integer.parseInt(in.readLine());
		System.out.println("First: "+first);

		System.out.print("Input Second Number: ");
		int second = Integer.parseInt(in.readLine());
		System.out.println("Second: "+second);

		System.out.println(parseAndSort(first));

	}

public static String parseAndSort(int number){

int[] arr=stringToIntArray("8275");
System.out.print(arr[0]);
System.out.print(arr[1]);
System.out.print(arr[2]);
System.out.print(arr[3]);

 Arrays.sort(arr);
 		System.out.println("");
		System.out.println("Sort ");
System.out.print(arr[0]);
System.out.print(arr[1]);
System.out.print(arr[2]);
System.out.print(arr[3]);


		return "y/n";
	}

	public static int[] stringToIntArray(String s){
		
 	int[] intArray=new int[s.length()];
  	int i = 0;
	int strLength = s.length();

    for(i=0;i<strLength;++i) {
      if (!Character.isDigit(s.charAt(i))) {
        System.out.println("Contains an invalid digit");
        break;
      }
      intArray[i] = Integer.parseInt(String.valueOf(s.charAt(i)));
    }
    return "";
  }
 




}