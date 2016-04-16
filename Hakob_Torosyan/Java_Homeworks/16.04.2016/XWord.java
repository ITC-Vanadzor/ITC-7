import java.util.Scanner;
 
public class XWord {
	public static void main(String args[]) {
		String string = new String();
		Scanner scaner = new Scanner(System.in);
		System.out.println("Please insert string: ");
		string = scaner.nextLine();
		char[] arr = string.toCharArray();
		char[][] xword = new char[arr.length][arr.length];
		for(int m = 0; m < arr.length; m++) {
                        for(int n = 0; n < arr.length; n++) {
                                xword[m][n] = ' ';
                        }
                }
		
		for(int i = 0; i < arr.length; i++) {
			xword[i][i] = arr[i];
		}
		
		for(int j = 0, k = arr.length-1; j < arr.length;  k--, j++) {
			xword[k][j] = arr[j]; 
		}
		
		for(int m = 0; m < arr.length; m++) {
			for(int n = 0; n < arr.length; n++) {
				System.out.print(xword[m][n]);
			}
			System.out.println();
		}
	}
	
} 
