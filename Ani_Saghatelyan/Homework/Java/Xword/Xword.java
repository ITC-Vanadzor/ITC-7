import java.util.Scanner;
public class  Xword
{
	public  static void main(String[] args)
	{
		Scanner reader = new Scanner(System.in); 
		System.out.println("Enter a  word: ");
		String  word = reader.nextLine(); 
		Board board=new Board(word.toUpperCase());
	
		board.fillBoard();
		board.printBoard();
	}
}
