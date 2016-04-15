import java.util.Scanner;


public class Board extends Determination 
{
	

  	public Board( int sizeOfBoard)
  	{

		System.out.println("const board");
  		 n=sizeOfBoard;
    	 array = new int[sizeOfBoard][sizeOfBoard];
     	 enterValue();
     	 
  	}
 		
  	private void enterValue()
	{
				int i, j;
 				for (i = 0; i < n; i++)  
 				{
 					Scanner reader = new Scanner(System.in);
     				for (j = 0; j < n; j++) 
     				{
                 			System.out.print("Array["+i+"],["+j+"] = ");
        					array[i][j]= reader.nextInt();
     				}
     			}
 	}

 	public  int[][] getBoard()
 	{
 		return array;

 	}
 	
 }