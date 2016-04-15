import java.util.Scanner;
import java.util.Arrays;
class Kaprekar {
	public static void main(String args[]) {
		int number = 0;
		System.out.print("Please import number: ");
		Scanner scaner = new Scanner(System.in);
		number = scaner.nextInt();
		String string = Integer.toString(number);
		char[] charString = string.toCharArray(); 
		int[] array = new int[charString.length];
		for(int i=0; i<charString.length; i++) {
			array[i] = (int) charString[i]-48;
		}
		Arrays.sort(array);
		System.out.println("Difference between max and min values is: " + diffValues(array));
	}
	
	private static String diffValues(int[] array){
		int max_value = 0;
		int min_value = 0;
		for(int i = array.length-1; i >= 0; --i){
			max_value = max_value * 10 + array[i];
			min_value = min_value * 10 + array[array.length - i - 1];
		}
		System.out.println("Max value is: " + max_value);
		System.out.println("Min values is: " + min_value);
		int count = 0;
		int diff = max_value - min_value;
		int temp = diff;
		while(temp != 0 ){
			temp/=10;
			count++;
		}
		String str = "";
		for(int i = 1; i <= (array.length - count); i++){
			str += "0";
		}
		if(diff != 0)
		{str = str + diff;}
		
		return str;
	} 	
}
