import java.util.Scanner;

class XWord {
    public static void main (String [] args) {
		Scanner reader = new Scanner(System.in);
		System.out.println("Input word :  ");
		String inputWord = reader.next().toUpperCase();
	
		Board board = new Board (inputWord.length());
		board.printXWord(inputWord);
    }    
}
