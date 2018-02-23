import java.util.Scanner;

public class XWord {
    public static void main (String [] args) {
	Scanner reader = new Scanner(System.in);
	System.out.print("Please enter word --- ");
	String inputWord = reader.next().toUpperCase();
	
	Border border = new Border (inputWord.length());
	
	border.printXWord(inputWord);
    }    
}
