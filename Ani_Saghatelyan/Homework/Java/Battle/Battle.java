import java.util.Scanner;
public class Battle
{
	public static void main(String [] args)
	{
        
        int sizeOfBoard=0;

        Scanner in = new Scanner(System.in);
        System.out.println("enter size of field");
        sizeOfBoard = in.nextInt();

        Board myBoard=new Board(sizeOfBoard);
	    myBoard.Determine();     
      
    }
}

		
	

		

	


