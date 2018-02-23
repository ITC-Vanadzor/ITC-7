import java.util.Scanner;
public class Battle
{
	public static void main(String [] args)
	{
        
        int sizeOfBoard=0;

        do
        {
        	Scanner in = new Scanner(System.in);
        	System.out.println("enter size of field");
        	sizeOfBoard = in.nextInt();
        	if(sizeOfBoard<0)
                          {

                            System.out.println("Enter size of board more than 0");
                          }

        }while(sizeOfBoard<=0);

        Board myBoard=new Board(sizeOfBoard);
        Determination determineShips=new Determination(myBoard, sizeOfBoard);
        System.out.println("There is " + determineShips.Determine()+"ships");     
      
    }
}

		
	

		

	


