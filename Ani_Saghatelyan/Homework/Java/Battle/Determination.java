import java.util.Scanner;
public class Determination
{ 
	
 		private  int  height=0;
 		private int width=0;
 		private Board myBoard;
    	private  int area=0;// area of each boat
    	private int count=0;
    	private int boardSize=0;

		public Determination(Board newBoard,  int n) {
      		  myBoard = newBoard;
      		  boardSize=n;

        }  
 		
		
		public int  Determine()
		{
			int quantity=0; 
			for(int q=0; q<boardSize; ++q)
			{
	        	 for( int t=0; t<boardSize; ++t)
	        	{
	                    if(myBoard.getBoard(q,t)==1)
	                    {
	                    	area=1;
	                        width=1;
	                        height=1;
	                        CheckShip(q,t);
	                        int areaIJ=height*width;
	         				System.out.println("AREAIJ  " + areaIJ);
	                        System.out.println("Area  " + area);
	                        if( area==areaIJ  )
	                        {
	                            ++quantity;
	                        }
	                    }
	                  
	            }         
	        }
	        return quantity;
   		}

           
		private void CheckShip( int i, int j)
		{
       

	        myBoard.setBoard(i,j,2);
   
       
		           if(j<boardSize-1 && myBoard.getBoard(i,j+1)==1)
        	       {  
        	       	   
        	       	   ++area;
        	       	   ++height;
      		 	       CheckShip(i, j+1);
              	    }     
              	    if(j>0 && myBoard.getBoard(i,j-1)==1)
              	    {

                  	   ++area;
                  	   if(myBoard.getBoard(i-1,j-1) != 2) 
		                {
                		++height;
            		    }
                  	   CheckShip(i, j-1); 
               	    } 
             
                    if(i<boardSize -1 && myBoard.getBoard(i+1,j)==1)
                    {
                    	++width;
                  	    ++area;
                  	    CheckShip(i+1, j);
                    } 
           
                   if(i>0 && myBoard.getBoard(i-1,j)==1)
                   {
                        ++area;
                        if(myBoard.getBoard(i-1,j+1 ) != 2) 
			       		{
                		++width;
        		    	}
                        CheckShip(i-1,j);
                   }


       
	}  
		
}
