import java.util.Scanner;
public class Board 
{
	
    private int n;
    private int[][] array;
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
                 				do{
                          				System.out.print("Array["+i+"],["+j+"] = ");
        				      		 array[i][j]= reader.nextInt();
                          				if(array[i][j]<0 || array[i][j]>1)
                        				{
                            					System.out.println("ENter number between [0,1]");
                          				}
                        		 	}while(array[i][j]<0 || array[i][j]>1);
     					}
     				}
 	}

 	public  int getBoard(int i,int j)
 	{
 		return array[i][j];

 	}
    public  void setBoard(int i,int j,int value)
  {
    array[i][j]=value;

  }
 	
 }
